import cv2
from PIL import Image

zdj = cv2.imread('C:/Users/anton/OneDrive/Desktop/Informatics/PersistanceOfVision/pov/img2.png')

cv2.namedWindow("window")
zdjecie = cv2.resize(src= zdj, 
                          dsize =(50, 50), 
                          interpolation=cv2.INTER_AREA)

zdjecie_ = cv2.resize(src= zdjecie, 
                          dsize =(500, 500), 
                          interpolation=cv2.INTER_AREA)

cv2.imshow("window", zdjecie_)

zdjecie_rgb = cv2.cvtColor(zdjecie, cv2.COLOR_BGR2RGB)
b, g, r = cv2.split(zdjecie_rgb)
plik = open("C:/Users/anton/OneDrive/Desktop/Informatics/PersistanceOfVision/pov/bitmapa.txt", 'w')


zzz=zdjecie_
plik2 = open("C:/Users/anton/OneDrive/Desktop/Informatics/PersistanceOfVision/pov/projekt_pov.png", 'w')
cv2.imwrite("C:/Users/anton/OneDrive/Desktop/Informatics/PersistanceOfVision/pov/projekt_pov.png", zzz)


liczba = 1
text = "{" + '\n'
plik.write(text)
for i in range(len(r)):
    text = "{" + '\n'
    plik.write(text)
    for j in range(len(r[0])):
        text = "{"+ str(r[j][i]) + ", " + str(g[j][i]) + ", " + str(b[j][i]) + "}, "
        if j == len(r[0])-1:
            text = "{"+ str(r[j][i]) + ", " + str(g[j][i]) + ", " + str(b[j][i]) + "} " + '\n'
        plik.write(text)
        liczba += 1
    text = "}," + '\n'
    if i == len(r)-1:
        text = "}" + '\n'
    plik.write(text)
text = "}"
plik.write(text)

plik.close()
cv2.waitKey(0)
cv2.destroyAllWindows()