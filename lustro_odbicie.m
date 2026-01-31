clc; clear; close all;

laserStart = [-10, 0];
mirrorCenter = [0, 0];
mirrorPoints = [-2 -3; 2 3];
reflectPoint = [-6.54, 9];
screenPoints = [-10 9; 10 9];
dashedLine = [0 0; 0 9];

figure('Color','w'); hold on; axis equal; grid on;
xlabel('Z','FontWeight','bold'); ylabel('Y','FontWeight','bold');
title('Wizualizacja odbicia wiązki laserowej od lustra',...
      'FontWeight','bold','FontSize',14,...
      'Position',[0 11.5 0]); 
mirrorPatchX = [mirrorPoints(1,1) mirrorPoints(2,1) mirrorPoints(2,1) mirrorPoints(1,1)];
mirrorPatchY = [mirrorPoints(1,2) mirrorPoints(2,2) mirrorPoints(2,2) mirrorPoints(1,2)];
fill(mirrorPatchX, mirrorPatchY, [0.4 0.7 1], 'FaceAlpha',0.5, 'EdgeColor','b','LineWidth',2);
% cień lustra
fill(mirrorPatchX, mirrorPatchY-0.2, [0.3 0.6 0.9], 'FaceAlpha',0.2, 'EdgeColor','none');

text(2,-1.8,'lustro','FontSize',12,'FontWeight','bold','HorizontalAlignment','center');

nPoints = 50;
laserX = linspace(laserStart(1), mirrorCenter(1), nPoints);
laserY = linspace(laserStart(2), mirrorCenter(2), nPoints);
for i=1:nPoints-1
    plot(laserX(i:i+1),laserY(i:i+1),'Color',[1 i/nPoints 0],'LineWidth',2);
end
text(laserStart(1)+0.5, laserStart(2)-0.4,'laser','FontSize',12,'FontWeight','bold','Color','r');

reflectX = linspace(mirrorCenter(1), reflectPoint(1), nPoints);
reflectY = linspace(mirrorCenter(2), reflectPoint(2), nPoints);
for i=1:nPoints-1
    plot(reflectX(i:i+1),reflectY(i:i+1),'Color',[1 1-i/nPoints 0],'LineWidth',2.5);
end

fill([screenPoints(1,1) screenPoints(2,1) screenPoints(2,1) screenPoints(1,1)], ...
     [screenPoints(1,2) screenPoints(2,2) screenPoints(2,2)+0.2 screenPoints(1,2)+0.2], ...
     [0.9 0.9 0.9],'FaceAlpha',0.8,'EdgeColor','k','LineWidth',2);
text(screenPoints(2,1)-2.4,screenPoints(2,2)-0.7,'ekran','FontSize',12,'FontWeight','bold');

plot(reflectPoint(1), reflectPoint(2),'ko','MarkerFaceColor','r','MarkerSize',8);
text(reflectPoint(1)-1, reflectPoint(2)+0.8,'punkt padania','FontSize',10,'FontWeight','bold');

plot(dashedLine(:,1), dashedLine(:,2),'k--','LineWidth',1.5);
text(dashedLine(1,1)+0.5, dashedLine(2,2)-3.2,'z','FontSize',12,'FontWeight','bold');
text(dashedLine(1,1)-3.5, dashedLine(2,2)-0.55,'p','FontSize',12,'FontWeight','bold');

plot([reflectPoint(1) reflectPoint(1)], [0 reflectPoint(2)],'k--','LineWidth',1.2);

kSize = 0.3;
plot([-kSize 0], [screenPoints(1,2) screenPoints(1,2)], 'k', 'LineWidth',1.5);
plot([0 0], [screenPoints(1,2)-0.5 screenPoints(1,2)], 'k', 'LineWidth',1.5);
text(0.2, screenPoints(1,2)-0.5, '90^\circ','FontSize',12,'FontWeight','bold');

r = 2.4;
lineZ_end = [mirrorCenter(1), reflectPoint(2)];
vZ = lineZ_end - mirrorCenter;

vLaser = reflectPoint - mirrorCenter;

phi = atan2(vLaser(2),vLaser(1)) - atan2(vZ(2),vZ(1));

if phi > 0
    phi = -phi;
end

nArc = 30;
t = linspace(0, phi, nArc);
plot(mirrorCenter(1) + r*sin(t), mirrorCenter(2) + r*cos(t), 'm', 'LineWidth', 1.5);

text(mirrorCenter(1)-0.8, mirrorCenter(2)+1.8, '\phi','FontSize',12,'FontWeight','bold','Color','m');

r = 2.4;
vLaserInc = mirrorCenter - laserStart;
vMirror = mirrorPoints(2,:) - mirrorPoints(1,:);

alpha = atan2(vMirror(2), vMirror(1)) - atan2(vLaserInc(2), vLaserInc(1));

if alpha < 0
    alpha = alpha + 2*pi;
end

nArc = 30;
t = linspace(0, alpha, nArc);
plot(mirrorCenter(1) + r*cos(t), mirrorCenter(2) + r*sin(t), 'k', 'LineWidth', 1.5);

text(mirrorCenter(1)+1, mirrorCenter(2)+0.9,'\alpha','FontSize',12,'FontWeight','bold','Color','m');


plot([-14 14],[0 0],'k--');

xlim([-11 11]);
ylim([-3 10]);

grid on; set(gca,'GridLineStyle','--','GridColor',[0.7 0.7 0.7]);
