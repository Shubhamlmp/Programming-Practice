void zigZag(int a[], int n)

    {

int i=0;

        bool biggerrequirement=true;

        while(i!=n)

{

            if(i==0) {i++;}

            else if(biggerrequirement && a[i]<a[i-1]) 

            {swap(a[i],a[i-1]);

            biggerrequirement =false;i++;

            }

            else if(!biggerrequirement && a[i]>a[i-1]) 

            {

                swap(a[i],a[i-1]);

            biggerrequirement =true;i++;

            }

            else {i++; biggerrequirement = !biggerrequirement;}

}

       }