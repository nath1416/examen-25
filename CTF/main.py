import cv2

# load images
image1 = cv2.imread("q3-init.png")
image2 = cv2.imread("q2.png")

# Calculate the per-element absolute difference between 
# two arrays or between an array and a scalar
diff = 255 - cv2.absdiff(image1, image2)

cv2.imshow('diff', diff)
cv2.waitKey()
# compute difference
# difference = cv2.subtract(image1, image2)

# # color the mask red
# Conv_hsv_Gray = cv2.cvtColor(difference, cv2.COLOR_BGR2GRAY)
# ret, mask = cv2.threshold(Conv_hsv_Gray, 0, 255,cv2.THRESH_BINARY_INV |cv2.THRESH_OTSU)
# difference[mask != 255] = [0, 0, 255]

# # add the red mask to the images to make the differences obvious
# image1[mask != 255] = [0, 0, 255]
# image2[mask != 255] = [0, 0, 255]

# # store images
# cv2.imwrite('diffOverImage1.png', image1)
# cv2.imwrite('diffOverImage2.png', image1)
# cv2.imwrite('diff.png', difference)