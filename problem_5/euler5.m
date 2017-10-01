%euler5.m

clear

tests = [11 13 14 16 17 18 19 20];
%tests = 1:10;
count = 0;

tic

for i = 1*10^8:2:1*10^9
    for j = 1:length(tests)
        if mod(i,tests(j))==0
            count = count+1;
        else
            break
        end
    end
    
    if count==length(tests)
        answer=i;
        break
    else
        count=0;
    end
end

toc