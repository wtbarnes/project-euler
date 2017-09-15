%euler6.m

clear

sumsquare = 0;
squaresum = 0;

N = 100;

for i=1:N
    sumsquare = i^2+sumsquare;
    squaresum = i+squaresum;
end

squaresum = squaresum^2;

diff = squaresum-sumsquare;