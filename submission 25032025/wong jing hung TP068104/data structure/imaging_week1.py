# import cv2
# cam = cv2.videoCapture(0) #create webcam object
# if not cam.isOpened():
#     print("not able to open computer camera")
#     exit()

# while True:
#     result, image = cam.read() #start to capture frame by frame
#     cv2.imshow('Capture Image', image) # show the UI for us to see

#     #unicode code of a specified character.
#     if cv2.waitKey(1) == ord('c') # key press -c
#         cv2.imwrite("myimage.png",image)
#     elif cv2.waitKey(1) == ord('q'): # key press 1 break
#     cv2.destroyAllWindows()

#     # release the camera (close)
#     cam.release() 
    
#     #release the camera (close)
#     cam.release
    
import cv2
import sounddevice as sd
import wavio
import dxcam
import numpy as np

# ---------------------- WEBCAM RECORDING ----------------------
def record_webcam(video_filename="myvideo.avi", duration=10):
    cam = cv2.VideoCapture(0)
    
    if not cam.isOpened():
        print("❌ Error: Could not open the webcam")
        return
    
    fourcc = cv2.VideoWriter_fourcc(*'XVID')
    videoWriter = cv2.VideoWriter(video_filename, fourcc, 20.0, (640, 480))

    print("🎥 Webcam recording started. Press 'q' to stop...")
    start_time = cv2.getTickCount()
    fps = 20  # Frames per second
    frame_limit = duration * fps

    for _ in range(frame_limit):  # Record for the given duration
        ret, frame = cam.read()
        if not ret:
            print("❌ Error: Could not capture frame")
            break
        
        cv2.imshow('Webcam Recording', frame)
        videoWriter.write(frame)

        if cv2.waitKey(1) & 0xFF == ord('q'):
            break

    cam.release()
    videoWriter.release()
    cv2.destroyAllWindows()
    print("✅ Webcam recording completed.")


# ---------------------- AUDIO RECORDING ----------------------
def record_audio(audio_filename="mysound.wav", duration=5, fs=44100, channels=2):
    print("🎙️ Audio recording started...")
    audio_data = sd.rec(int(duration * fs), samplerate=fs, channels=channels, dtype=np.int16)
    sd.wait()
    wavio.write(audio_filename, audio_data, fs, sampwidth=2)
    print("✅ Audio recording completed.")


# ---------------------- SCREEN RECORDING ----------------------
def record_screen(screen_filename="myScrCapture.mp4", duration=10, fps=20):
    camera = dxcam.create(output_idx=0, output_color="BGR")

    fourcc = cv2.VideoWriter_fourcc(*'mp4v')
    videoWriter = cv2.VideoWriter(screen_filename, fourcc, fps, (1920, 1080))

    camera.start(target_fps=fps, video_mode=True)
    print("🖥️ Screen recording started...")

    for _ in range(duration * fps):
        frame = camera.get_latest_frame()
        if frame is not None:
            videoWriter.write(frame)

    videoWriter.release()
    camera.stop()
    print("✅ Screen recording completed.")


# ---------------------- MAIN FUNCTION ----------------------
if __name__ == "__main__":
    record_webcam(duration=10)   # Record webcam for 10 seconds
    record_audio(duration=5)     # Record audio for 5 seconds
    record_screen(duration=10)   # Record screen for 10 seconds

    print("🎬 All recordings completed successfully!")

# #matrix
# import numpy as np

# A = np.array([[-1, 0], [0, 1]])
# B = np.array([[-1, 2], [3, -2]])

# result = A - B

# print("A - B =\n", result)

# #question 2 
# import numpy as np

# M = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9]])

# result = M * 10

# print("10 * M =\n", result)



