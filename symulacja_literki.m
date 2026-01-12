bitmapa = zeros(17, 108);
bitmapa(6:13,20) =1;
bitmapa(10, 20:25)=1
bitmapa(13, 20:25)=1
bitmapa(6:13,25) =1;
figure;      
hold on;  
axis equal;
xlabel('X');
ylabel('Y');

theta = linspace(0, 2*pi, 360);
r1 = 9+17;
r2 = 9;
x1 = r1 * cos(theta);
y1 = r1 * sin(theta);
x2 = r2 * cos(theta);
y2 = r2 * sin(theta);

plot(x1, y1, 'b-', 'LineWidth', 1.5);
plot(x2, y2, 'g-', 'LineWidth', 1.5);

for c = 1:size(bitmapa, 2)
    for r = 1:size(bitmapa, 1)
        if bitmapa(r, c) == 1
            x = (r+8)*cos(c*(360/108)*(pi/180));
            y = (r+8)*sin(c*(360/108)*(pi/180));
            plot(x, y, 'r.', 'MarkerSize', 12);
        elseif bitmapa(r, c) == 0
            x = (r+8)*cos(c*(360/108)*(pi/180));
            y = (r+8)*sin(c*(360/108)*(pi/180));
            plot(x, y, 'g.', 'MarkerSize', 5);  
        end
    end
end
