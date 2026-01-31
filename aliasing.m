clc; clear; close all;

f = 16;
A = 3.14;

Fs_cont = 1000;
t = 0:1/Fs_cont:1;

x = A * sin(2*pi*f*t);

l_probek = 17;
czas_probkowania = 0:1/l_probek:1.0;
sygnal_sprobkowany = A * sin(2*pi*f*czas_probkowania);

interpolacja = interp1(czas_probkowania, sygnal_sprobkowany, t, 'spline');


figure
plot(t, x, 'Color', [0 0.5 0], 'LineWidth', 2); hold on;
stem(czas_probkowania, sygnal_sprobkowany, 'r', 'filled');
plot(t, interpolacja, 'b--', 'LineWidth', 2);

grid on
xlabel('t [s]')
ylabel('\phi(t) [rad]')
ylim([-3.5 5.3])


title('Aliasing')
legend('Droga kątowa silnika \phi(t)', ...
       'Moment wywietlenia diod - próbkowanie', ...
       'Sygnał pozorny (alias)', ...
       'Location','best')
