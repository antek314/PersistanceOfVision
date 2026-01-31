clc; clear; close all;

a = 12;
b = 5;
alpha = deg2rad(35);

x = linspace(-a/2,a/2,2);
y = linspace(-b/2,b/2,2);
[X,Y] = meshgrid(x,y);
Z = zeros(size(X));

R = [ cos(alpha) 0 sin(alpha);
      0          1 0;
     -sin(alpha) 0 cos(alpha) ];

pts = R * [X(:)'; Y(:)'; Z(:)'];
Xm = reshape(pts(1,:),size(X));
Ym = reshape(pts(2,:),size(Y));
Zm = reshape(pts(3,:),size(Z));

a_proj = a * cos(alpha);
[Xp,Yp] = meshgrid(linspace(-a_proj/2,a_proj/2,2),y);
Zp = zeros(size(Xp));

figure('Color','w');
hold on; axis equal; grid on;
xlabel('X'); ylabel('Y'); zlabel('Z');
title('Efektywna powierzchnia lustra przy oświetleniu z góry');

for k = linspace(-a/2,a/2,7)
    plot3([k k],[0 0],[8 -2],'r--','LineWidth',1);
end

surf(Xp,Yp,Zp,...
    'FaceColor',[1 0.95 0.6],...
    'FaceAlpha',0.8,...
    'EdgeColor','none');

surf(Xm,Ym,Zm,...
    'FaceColor',[0.8 0.8 0.85],...   
    'FaceAlpha',0.9,...
    'EdgeColor',[0.3 0.3 0.3],...
    'LineWidth',0.8);

text(mean(Xm(:))+1.5, mean(Ym(:))-9.8, mean(Zm(:))+7.3,...
     'powierzchnia','FontSize',8,'FontWeight','bold');


offset = -1.4;

p1 = [Xm(1,1), Ym(1,1), Zm(1,1)];
p2 = [Xm(1,2), Ym(1,2), Zm(1,2)];

% linia wymiarowa
plot3([p1(1) p2(1)],...
      [p1(2) p2(2)],...
      [p1(3) p2(3)],...
      'k','LineWidth',2);

plot3(p1(1),p1(2),p1(3),'k<','MarkerSize',4,'MarkerFaceColor','k');
plot3(p2(1),p2(2),p2(3),'k>','MarkerSize',4,'MarkerFaceColor','k');

text(mean([p1(1) p2(1)]),...
     mean([p1(2) p2(2)])+offset+0.3,...
     mean([p1(3) p2(3)]),...
     'a','FontSize',12,'FontWeight','bold');


offset = 0.7;

p1 = [Xm(1,1), Ym(1,1), Zm(1,1)];
p2 = [Xm(2,1), Ym(2,1), Zm(2,1)];

plot3([p1(1) p2(1)],...
      [p1(2) p2(2)],...
      [p1(3) p2(3)],...
      'k','LineWidth',2);

plot3(p1(1),p1(2),p1(3),'k^','MarkerSize',4,'MarkerFaceColor','k');
plot3(p2(1),p2(2),p2(3),'kv','MarkerSize',4,'MarkerFaceColor','k');

text(mean([p1(1) p2(1)]),...
     mean([p1(2) p2(2)]),...
     mean([p1(3) p2(3)])+offset+0.3,...
     'b','FontSize',12,'FontWeight','bold');


th = linspace(0,alpha,50);
r = 4;
plot3(r*cos(th)+6, zeros(size(th)), r*sin(th),'k','LineWidth',1.5);
text(6+r+0.5,0,r/2,'\alpha','FontSize',12);

view(35,25);
