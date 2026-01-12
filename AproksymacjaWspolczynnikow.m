y = [500 550 600 650 700 750 800 950 1000 1100 1200 1350 1500 1750 2000 2500 3000];
x = [52900 55900 58800 59800 62100 64100 67100 69100 71000 73000 77000 82000 103000 113000 120000 140000 175000];

n = 2;

p = polyfit(x, y, n);

x_fit = linspace(min(x), max(x), 500);
y_fit = polyval(p, x_fit);

figure;
plot(x, y, 'o', 'MarkerFaceColor', 'b', 'DisplayName', 'Dane pomiarowe'); hold on;
plot(x_fit, y_fit, 'r-', 'LineWidth', 2, 'DisplayName', sprintf('Aproksymacja rzędu %d', n));
grid on;
ylabel('czas opóźnienia [\mus]');
xlabel('czas obrotu silnika [\mus]');
title(sprintf('Aproksymacja wielomianowa rzędu %d', n));
legend('Location','northwest');

% x_fit = linspace(min(x), max(x), 500);
% y_fit = spline(x, y, x_fit);
% 
% plot(x, y, 'bo', x_fit, y_fit, 'r-', 'LineWidth', 2);
% legend('Dane', 'Spline');
