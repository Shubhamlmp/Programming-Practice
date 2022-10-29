// Get your own ApiKey from https://openweathermap.org/api
const apikey = "3265874a2c77ae4a04bb96236a642d2f";

// Grab objects via DOM
const main = document.getElementById("main");
const form = document.getElementById("form");
const search = document.getElementById("search");

// Function that returns weatherdata
const url = (city) =>
    `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${apikey}`; //

async function getWeatherByLocation(city) {
    const resp = await fetch(url(city), { origin: "cors" });
    const respData = await resp.json();

    console.log(respData);

    addWeatherToPage(respData);
}

// Display the weather data
function addWeatherToPage(data) {
    const temp = KtoC(data.main.temp);

    // DOM manipulation
    const weather = document.createElement("div");
    weather.classList.add("weather");

    weather.innerHTML = `
        <h2><img src="https://openweathermap.org/img/wn/${data.weather[0].icon}@2x.png" /> ${temp}°C <img src="https://openweathermap.org/img/wn/${data.weather[0].icon}@2x.png" /></h2>
        <small>${data.weather[0].main}</small>
    `;

    // cleanup
    main.innerHTML = "";

    main.appendChild(weather);
}

// Temperature conversion
function KtoC(K) {
    return Math.floor(K - 273.15);
}

// Event listener for form submission
form.addEventListener("submit", (e) => {
    e.preventDefault();

    const city = search.value;

    if (city) {
        getWeatherByLocation(city);
    }
});
