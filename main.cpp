#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <iostream>
#include <cstring>
#include <string>
#include <stdexcept>
#include <sstream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){

cout << "Enter K36: ";
   std::string input;
    std::getline(std::cin, input);

    std::stringstream ss(input);
    std::string token;

    std::getline(ss, token, ',');
    float var1;
    ss >> var1;
    std::getline(ss, token, ',');
    float var2;
    ss >> var2;
    std::getline(ss, token, ',');
    float var3;
    ss >> var3;
    std::getline(ss, token, ',');
    float var4;
    ss >> var4;
    std::getline(ss, token, ',');
    float var5;
    ss >> var5;
    std::getline(ss, token, ',');
    float var6;
    ss >> var6;
    std::getline(ss, token, ',');
    float var7;
    ss >> var7;
    std::getline(ss, token, ',');
    float var8;
    ss >> var8;
    std::getline(ss, token, ',');
    float var9;
    ss >> var9;
    std::getline(ss, token, ',');
    float var10;
    ss >> var10;
    std::getline(ss, token, ',');
    float var11;
    ss >> var11;
    std::getline(ss, token, ',');
    float var12;
    ss >> var12;
    std::getline(ss, token, ',');
    float var13;
    ss >> var13;
    std::getline(ss, token, ',');
    float var14;
    ss >> var14;
    std::getline(ss, token, ',');
    float var15;
    ss >> var15;
    std::getline(ss, token, ',');
    float var16;
    ss >> var16;
    std::getline(ss, token, ',');
    float var17;
    ss >> var17;
    std::getline(ss, token, ',');
    float var18;
    ss >> var18;
    std::getline(ss, token, ',');
    float var19;
    ss >> var19;
    std::getline(ss, token, ',');
    float var20;
    ss >> var20;
    std::getline(ss, token, ',');
    float var21;
    ss >> var21;
    std::getline(ss, token, ',');
    float var22;
    ss >> var22;
    std::getline(ss, token, ',');
    float var23;
    ss >> var23;
    std::getline(ss, token, ',');
    float var24;
    ss >> var24;
    std::getline(ss, token, ',');
    float var25;
    ss >> var25;
    std::getline(ss, token, ',');
    float var26;
    ss >> var26;
    std::getline(ss, token, ',');
    float var27;
    ss >> var27;
    std::getline(ss, token, ',');
    float var28;
    ss >> var28;
    std::getline(ss, token, ',');
    float var29;
    ss >> var29;
    std::getline(ss, token, ',');
    float var30;
    ss >> var30;
    std::getline(ss, token, ',');
    float var31;
    ss >> var31;
    std::getline(ss, token, ',');
    float var32;
    ss >> var32;
    std::getline(ss, token, ',');
    float var33;
    ss >> var33;
    std::getline(ss, token, ',');
    float var34;
    ss >> var34;
    std::getline(ss, token, ',');
    float var35;
    ss >> var35;
    std::getline(ss, token, ',');
    float var36;
    ss >> var36;


float Amerindian[]={0.534489,0.637984,0.879438};
float Arabian[]={0.605295,0.38154,0.578967};
float Armenian[]={0.425894,0.351802,0.370315};
float Basque[]={0.428541,0.500003,0.214174};
float Central_African[]={0.99999,0.871566,0.542864};
float Central_Euro[]={0.23204,0.189547,0.241277};
float East_African[]={0.920433,0.778675,0.47141};
float East_Asian[]={0.789404,0.622689,0.971859};
float East_Balkan[]={0.222116,0.333277,0.240639};
float East_Central_Asian[]={0.750083,0.631003,0.928717};
float East_Central_Euro[]={0.089588,0.281976,0.256314};
float East_Med[]={0.499992,0.298712,0.390196};
float Eastern_Euro[]={0.095084,0.333277,0.154629};
float Fennoscandian[]={0.036283,0.291595,0.249901};
float French[]={0.214176,0.249913,0.203588};
float Iberian[]={0.416629,0.369748,0.322844};
float Indo_Chinese[]={0.739805,0.590314,0.972764};
float Italian[]={0.395994,0.316769,0.346471};
float Malayan[]={0.773346,0.627957,0.901299};
float Near_Eastern[]={0.57224,0.405525,0.488876};
float North_African[]={0.540009,0.279924,0.43997};
float North_Atlantic[]={0.174294,0.395315,0.278982};
float North_Caucasian[]={0.434751,0.450535,0.374946};
float North_Sea[]={0.081474,0.275433,0.285628};
float Northeast_African[]={0.845116,0.600039,0.449973};
float Oceanian[]={0.499995,0.592629,0.944596};
float Omotic[]={0.952536,0.54764,0.547627};
float Pygmy[]={0.985881,0.885857,0.371374};
float Siberian[]={0.655962,0.725891,0.930254};
float South_Asian[]={0.652825,0.673677,0.757028};
float South_Central_Asian[]={0.621088,0.521064,0.684268};
float South_Chinese[]={0.644623,0.626555,0.97004};
float Volga_Ural[]	={0.218644,0.374958,0.46873};
float West_African[]	={0.95544,0.810599,0.754115};
float West_Caucasian[]={0.515625,0.515634,0.46873};
float West_Med[]={0.354109,0.312436,0.416628};

   float HERC2 = Amerindian[0]*var1+Arabian[0]*var2+Armenian[0]*var3+Basque[0]*var4+Central_African[0]*var5+
   Central_Euro[0]*var6+East_African[0]*var7+East_Asian[0]*var8+East_Balkan[0]*var9+East_Central_Asian[0]*var10+
   East_Central_Euro[0]*var11+East_Med[0]*var12+Eastern_Euro[0]*var13+Fennoscandian[0]*var14+French[0]*var15+
   Iberian[0]*var16+Indo_Chinese[0]*var17+Italian[0]*var18+Malayan[0]*var19+Near_Eastern[0]*var20+North_African[0]*var21+
   North_Atlantic[0]*var22+
   North_Caucasian[0]*var23+North_Sea[0]*var24+Northeast_African[0]*var25+Oceanian[0]*var26+Omotic[0]*var27+Pygmy[0]*var28+
   Siberian[0]*var29+South_Asian[0]*var30+South_Central_Asian[0]*var31+South_Chinese[0]*var32+Volga_Ural[0]*var33+
   West_African[0]*var34+West_Caucasian[0]*var35+West_Med[0]*var36;

  float OCA2 = Amerindian[1]*var1+Arabian[1]*var2+Armenian[1]*var3+Basque[1]*var4+Central_African[1]*var5+
   Central_Euro[1]*var6+East_African[1]*var7+East_Asian[1]*var8+East_Balkan[1]*var9+East_Central_Asian[1]*var10+
   East_Central_Euro[1]*var11+East_Med[1]*var12+Eastern_Euro[1]*var13+Fennoscandian[1]*var14+French[1]*var15+
   Iberian[1]*var16+Indo_Chinese[1]*var17+Italian[1]*var18+Malayan[1]*var19+Near_Eastern[1]*var20+North_African[1]*var21+
   North_Atlantic[1]*var22+
   North_Caucasian[1]*var23+North_Sea[1]*var24+Northeast_African[1]*var25+Oceanian[1]*var26+Omotic[1]*var27+Pygmy[1]*var28+
   Siberian[1]*var29+South_Asian[1]*var30+South_Central_Asian[1]*var31+South_Chinese[1]*var32+Volga_Ural[1]*var33+
   West_African[1]*var34+West_Caucasian[1]*var35+West_Med[1]*var36;

   float TYRP1 = Amerindian[2]*var1+Arabian[2]*var2+Armenian[2]*var3+Basque[2]*var4+Central_African[2]*var5+
   Central_Euro[2]*var6+East_African[2]*var7+East_Asian[2]*var8+East_Balkan[2]*var9+East_Central_Asian[2]*var10+
   East_Central_Euro[2]*var11+East_Med[2]*var12+Eastern_Euro[2]*var13+Fennoscandian[2]*var14+French[2]*var15+
   Iberian[2]*var16+Indo_Chinese[2]*var17+Italian[2]*var18+Malayan[2]*var19+Near_Eastern[2]*var20+North_African[2]*var21+
   North_Atlantic[2]*var22+
   North_Caucasian[2]*var23+North_Sea[2]*var24+Northeast_African[2]*var25+Oceanian[2]*var26+Omotic[2]*var27+Pygmy[2]*var28+
   Siberian[2]*var29+South_Asian[2]*var30+South_Central_Asian[2]*var31+South_Chinese[2]*var32+Volga_Ural[2]*var33+
   West_African[2]*var34+West_Caucasian[2]*var35+West_Med[2]*var36;

cout << "HERC2 : " << HERC2/100 << "\n";
cout << "OCA2 : " << OCA2/100 << "\n";
cout << "TYRP1 : " << TYRP1/100 << "\n";

}


