class Solution {
public:
    int bitwiseComplement(int n) {

        if(n == 0) return 1; 
        
        int temp = n;
        string binary = "";
        // Decimal to Binary
        while(temp > 0) {
            binary = char((temp % 2) + '0') + binary;
            temp = temp / 2;
        }

        // Find complement
        string complement = "";
        for(char c : binary) {
            if(c == '1')
                complement += '0';
            else
                complement += '1';
        }
        // Convert complement to decimal
        int decimal = 0;
        int power = 1;
        for(int i = complement.length() - 1; i >= 0; i--) {
            if(complement[i] == '1')
                decimal += power;
            power *= 2;
    }
    return decimal;

        
    }
};
