from ast import If
import cv2
import glob
from PIL import Image

VIDEO_PATH = "bird.mp4"
FRAMES_PATH = "output/imgs"
GIF_OUTPUT_PATH = "output/gifs"


def mp4_to_img():
    print("Generating Frames ...")
    cap = cv2.VideoCapture(VIDEO_PATH)
    isReading, frame = cap.read()
    frame_count = 0
    while isReading:
        cv2.imwrite(f"output/imgs/frame_{frame_count:03d}.png", frame)

        isReading, frame = cap.read()
        frame_count += 1
    print("Frames Generated Sucessfully ...")

def gif(gif_name):
    print("Generating GIF ...")
    images = glob.glob(f"{FRAMES_PATH}/*.png")
    images.sort()
    frames = [Image.open(image) for image in images]
    frame_one = frames[0]
    frame_one.save(f"{GIF_OUTPUT_PATH}/{gif_name}.gif", format='GIF',
                   append_images=frames, save_all=True, duration=20, loop=0)
    
    print(f"GIF Generated Successfully in {GIF_OUTPUT_PATH}")

def main():
    # Convert the video into frames and store it locally.
    mp4_to_img()
    # Convert the frames to GIF
    gif("birf-gif")


if __name__ == "__main__":
    main()
