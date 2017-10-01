%euler3.m

clear

N=600851475143;

%%

%Find the first prime factor

for j=3:2:100000000
    if mod(N,j)==0
        alpha=N/j;
        lower=j;
        break
    end
end

%%

for k=lower+2:2:100000000
    if mod(alpha,k)==0
        beta = alpha/k;
        next=k;
        break
    end
end


%%

for l=next+2:2:100000000
    if mod(beta,l)==0
        gamma=beta/l;
        next1=l;
        break
    end
end

