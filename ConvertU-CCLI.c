/*
ConvertU-CCLI

ConvertU-CLI
Written in C
With much needed code optimizations

by Tristan
https://github.com/PhotonMastr/
*/

#include <stdio.h>
#include <stdlib.h>
#include "ConvertU-CCLI.h"
void mass(int massArg) {
  clrscr;
  long double massInput;
  printf("Convert FROM\n\n\n");
  printf("  You have 6 options. Please pick from this selection of options\n==================================================================\n");
  printf("1. US Tons\n2. Kilograms\n3. Grams\n4. Milligrams\n5. Pounds\n6. Ounces\n\n");
  scanf("%d", &massArg);
  if (massArg == 1) {
    printf("Input how many tons.\n");
    scanf("%Lf", &massInput);
    long double massTonsKilos = massInput * 907.2;
    long double massTonsGrams = massInput * 907200;
    long double massTonsMG = massInput * 970200000;
    long double massTonsLBS = massInput * 2000;
    long double massTonsOunces = massInput * 32000;
    printf("Converted!\n\n\n");
    printf("Tons to Kilos: %.2Lf\nTons to Grams: %.2Lf\nTons to Milligrams: %.2Lf\nTons to Pounds: %.2Lf\nTons to Ounces: %.2Lf\n", massTonsKilos, massTonsGrams, massTonsMG, massTonsLBS, massTonsOunces);
  }
  else if (massArg == 2) {
    printf("Input how many kilograms.\n");
    scanf("%Lf", &massInput);
    long double massKilosTons = massInput / 907.2;
    long double massKilosGrams = massInput * 1000;
    long double massKilosMG = massInput * 1000000;
    long double massKilosLBS = massInput * 2.205;
    long double massKilosOunces = massInput * 35.274;
    printf("Converted!\n\n\n");
    printf("Kilos to Tons: %.3Lf\nKilos to Grams: %.2Lf\nKilos to Milligrams: %.2Lf\nKilos to Pounds: %.2Lf\nKilos to Ounces: %.2Lf\n", massKilosTons, massKilosGrams, massKilosMG, massKilosLBS, massKilosOunces);
  }
  else if (massArg == 3) {
    printf("Input how many grams.\n");
    scanf("%Lf", &massInput);
    long double massGramsTons = massInput / 907200.0;
    long double massGramsKilos = massInput / 1000.0;
    long double massGramsMG = massInput * 1000;
    long double massGramsLBS = massInput / 453.6;
    long double massGramsOunces = massInput / 28.35;
    printf("Converted!\n\n\n");
    printf("Grams to Tons: %.6Lf\nGrams to Kilos: %.3Lf\nGrams to Milligrams: %.2Lf\nGrams to Pounds: %.3Lf\nGrams to Ounces: %.2Lf\n", massGramsTons, massGramsKilos, massGramsMG, massGramsLBS, massGramsOunces);
  }
  else if (massArg == 4) {
    printf("Input how many Milligrams\n");
    scanf("%Lf", &massInput);
    long double massMGTons = massInput / 907200000.0;
    long double massMGKilos = massInput / 1000000.0;
    long double massMGGrams = massInput / 1000.0;
    long double massMGPounds = massInput / 453600.0;
    long double massMGOunces = massInput / 28350.0;
    printf("Converted!\n\n\n");
    printf("Milligrams to Tons: %.9Lf\nMilligrams to Kilos: %.6Lf\nMilligrams to Grams: %.3Lf\nGrams to Pounds: %.6Lf\nGrams to Ounces: %.5Lf", massMGTons, massMGKilos, massMGGrams, massMGPounds, massMGOunces);
  }
  else if (massArg == 5) {
    printf("Input how many Pounds.\n");
    scanf("%Lf", &massInput);
    long double massLBSTons = massInput / 2000.0;
    long double massLBSKilos = massInput / 2.205;
    long double massLBSGrams = massInput * 453.6;
    long double massLBSMG = massInput * 453600;
    long double massLBSOunces = massInput * 16;
    printf("Converted!\n\n\n");
    printf("Pounds to Tons: %.4Lf\nPounds to Kilos: %.2Lf\nPounds to Grams: %.2Lf\nPounds to Milligrams: %.2Lf\nPounds to Ounces: %.2Lf", massLBSTons, massLBSKilos, massLBSGrams, massLBSMG, massLBSOunces );
  }
  else if (massArg == 6) {
    printf("input how many Ounces.\n");
    scanf("%Lf", &massInput);
    long double massOuncesTons = massInput / 32000.0;
    long double massOuncesKilos = massInput / 35.274;
    long double massOuncesGrams = massInput * 28.35;
    long double massOuncesMG = massInput * 28350;
    long double massOuncesLBS = massInput / 16.0;
    printf("Converted!\n\n\n");
    printf("Ounces to Tons: %.5Lf\nOunces to Kilos: %.2Lf\nOunces to Grams: %.2Lf\nOunces to Milligrams: %.2Lf\nOunces to Pounds: %.2Lf", massOuncesTons, massOuncesKilos, massOuncesGrams, massOuncesMG, massOuncesLBS);
  } else {
    printf("Invalid input. Please run the program again.");
  }
}
void storage(int storageArg) {
   clrscr;
   long double storageInput;
   printf("Convert FROM\n\n\n");
   printf("  You have 5 options. Please pick from this selection of options\n==================================================================\n");
   printf("1. Byte\n2. Kilobyte\n3. Megabyte\n4. Gigabyte\n5. Terabyte\n\n");
   scanf("%d", &storageArg);
   if (storageArg == 1) {
    printf("Input how many Bytes.\n");
    scanf("%Lf", &storageInput);
    long double storageBkb = storageInput / 1000;
    long double storageBmb = storageInput / 1000000;
    long double storageBgb = storageInput / 1000000000;
    long double storageBtb = storageInput / 1000000000000;
    printf("Converted!\n\n\n");
    printf("Bytes to Kilobytes: %.3Lf\nBytes to Megabytes: %.6Lf\nBytes to Gigabytes: %.9Lf\nBytes to Terabytes: %.12Lf", storageBkb, storageBmb, storageBgb, storageBtb);
    }
   else if (storageArg == 2) {
    printf("Input how many Kilobytes.\n");
    scanf("%Lf", &storageInput);
    long double storageKbB = storageInput * 1000;
    long double storageKbMb = storageInput / 1000;
    long double storageKbGb = storageInput / 1000000;
    long double storageKbTb = storageInput / 1000000000000;
    printf("Converted!\n\n\n");
    printf("Kilobytes to Bytes: %.2Lf\nKilobytes to Megabytes: %.3Lf\nKilobytes to Gigabytes: %.6Lf\nKilobytes to Terabytes: %.12Lf", storageKbB, storageKbMb, storageKbGb, storageKbTb);
  }
   else if (storageArg == 3) {
    printf("Input how many Megabytes.\n");
    scanf("%Lf", &storageInput);
    long double storageMbB = storageInput * 1000000;
    long double storageMbKb = storageInput * 1000;
    long double storageMbGb = storageInput / 1000;
    long double storageMbTb = storageInput / 1000000;
    printf("Converted!\n\n\n");
    printf("Megabytes to Bytes: %.2Lf\nMegabytes to Kilobytes: %.2Lf\nMegabytes to Gigabytes: %.3Lf\nMegabytes to Terabytes: %.6Lf", storageMbB, storageMbKb, storageMbGb, storageMbTb);
  } 
   else if (storageArg == 4) {
    printf("Input how many Gigabytes.\n");
    scanf("%Lf", &storageInput);
    long double storageGbB = storageInput * 1000000000;
    long double storageGbKb = storageInput * 1000000;
    long double storageGbMb = storageInput * 1000;
    long double storageGbTb = storageInput / 1000;
    printf("Converted!\n\n\n");
    printf("Gigabytes to Bytes: %.2Lf\nGigabytes to Kilobytes: %.2Lf\nGigabytes to Megabytes: %.2Lf\nGigabytes to Terabytes: %.3Lf", storageGbB, storageGbKb, storageGbMb, storageGbTb);
  }
   else if (storageArg == 5) {
    printf("Input how many Terabytes.\n");
    scanf("%Lf", &storageInput);
    long double storageTbB = storageInput * 1000000000000;
    long double storageTbKb = storageInput * 100000000000;
    long double storageTbMb = storageInput * 1000000;
    long double storageTbGb = storageInput * 1000;
    printf("Converted!\n\n\n");
    printf("Terabytes to Bytes: %.2Lf\nTerabytes to Kilobytes: %.2Lf\nTerabytes to Megabytes: %.2Lf\nTerabytes to Gigabytes: %.2Lf", storageTbB, storageTbKb, storageTbMb, storageTbGb);
  } else {
    printf("Invalid input. Please run the program again.");
  }


}
void length(int lengthArg) {
  clrscr;
  long double lengthInput;
  printf("Convert FROM\n\n\n");
  printf("  You have 7 options. Please pick from this selection of options\n==================================================================\n");
  printf("1. Foot\n2. Metre\n3. Kilometre\n4. Millimetre\n5. Centimetre\n6. Yard\n7. Inch\n\n");
  scanf("%d", &lengthArg);
  if (lengthArg == 1) {
    printf("Input how many feet.\n");
    scanf("%Lf", &lengthInput);
    long double lengthFeetMetre = lengthInput * 3.281;
    long double lengthFeetKM = lengthInput / 3281;
    long double lengthFeetMM = lengthInput * 304.8;
    long double lengthFeetCM = lengthInput * 30.48;
    long double lengthFeetYard = lengthInput / 3;
    long double lengthFeetInch = lengthInput * 12;
    printf("Converted!\n\n\n");
    printf("Feet to Metres: %.2Lf\nFeet to KM: %.4Lf\nFeet to Millimetres: %.2Lf\nFeet to Centimetres: %.2Lf\nFeet to Yards: %.2Lf\nFeet to Inches: %.2Lf", lengthFeetMetre, lengthFeetKM, lengthFeetMM, lengthFeetCM, lengthFeetYard, lengthFeetInch);
  }
  else if (lengthArg == 2) {
    printf("Input how many Metres.\n");
    scanf("%Lf", &lengthInput);
    long double lengthMetreFeet = lengthInput / 3.281;
    long double lengthMetreKM = lengthInput / 1000;
    long double lengthMetreMM = lengthInput * 1000;
    long double lengthMetreCM = lengthInput * 100;
    long double lengthMetreYard = lengthInput * 1.094;
    long double lengthMetreInch = lengthInput / 39.37;
    printf("Converted!\n\n\n");
    printf("Metres to Feet: %.2Lf\nMetres to Kilometres: %.3Lf\nMetres to Millimetres: %.2Lf\nMetres to Centimetres: %.2Lf\nMetres to Yards: %.2Lf\nMetres to Inches: %.2Lf", lengthMetreFeet, lengthMetreKM, lengthMetreMM, lengthMetreCM, lengthMetreYard, lengthMetreInch);
  }
  else if (lengthArg == 3) {
    printf("Input how many Kilometres.\n");
    scanf("%Lf", &lengthInput);
    long double lengthKMMetre = lengthInput * 1000;
    long double lengthKMFeet = lengthInput * 3281;
    long double lengthKMmm = lengthInput * 1000000;
    long double lengthKMcm = lengthInput * 100000;
    long double lengthKMYard = lengthInput * 1094;
    long double lengthKMInch = lengthInput * 39370;
    printf("Converted!\n\n\n");
    printf("Kilometres to Metres: %.2Lf\nKilometres to Feet: %.2Lf\nKilometres to Millimetres: %.2Lf\nKilometres to Centimetres: %.2Lf\nKilometres to Yards: %.2Lf\nKilometres to Inches: %.2Lf", lengthKMMetre, lengthKMFeet, lengthKMmm, lengthKMcm, lengthKMYard, lengthKMInch);
  }
  else if (lengthArg == 4) {
    printf("Input how many Millimetres.\n");
    scanf("%Lf", &lengthInput);
    long double lengthMMFoot = lengthInput / 304.8;
    long double lengthMMMetre = lengthInput / 1000;
    long double lengthMMKm = lengthInput / 1000000;
    long double lengthMMCm = lengthInput / 10;
    long double lengthMMYard = lengthInput / 914.4;
    long double lengthMMInch = lengthInput / 25.4;
    printf("Converted!\n\n\n");
    printf("Millimetres to Feet: %.3Lf\nMillimetres to Metres: %.3Lf\nMillimetres to Kilometres: %.6Lf\nMillimetres to Centimetres: %.2Lf\nMillimetres to Yards: %.3Lf\nMillimetres to Inches: %.2Lf", lengthMMFoot, lengthMMMetre, lengthMMKm, lengthMMCm, lengthMMYard, lengthMMInch);
  }
  else if (lengthArg == 5) {
    printf("Input how many Centimetres.\n");
    scanf("%Lf", &lengthInput);
    long double lengthCMFoot = lengthInput / 30.48;
    long double lengthCMMetre = lengthInput / 100;
    long double lengthCMKm = lengthInput / 1000000;
    long double lengthCMMM = lengthInput * 10;
    long double lengthCMYard = lengthInput / 91.44;
    long double lengthCMInch = lengthInput / 2.54;
    printf("Converted!\n\n\n");
    printf("Centimetres to Feet: %.2Lf\nCentimetres to Metres: %.2Lf\nCentimetres to Kilometres: %.6Lf\nCentimetres to Millimetres: %.2Lf\nCentimetres to Yards: %.2Lf\nCentimetres to Inches: %.2Lf", lengthCMFoot, lengthCMMetre, lengthCMKm, lengthCMMM, lengthCMYard, lengthCMFoot);
  }
  else if (lengthArg == 6) {
    printf("Input how many Yards.\n");
    scanf("%Lf", &lengthInput);
    long double lengthYardFoot = lengthInput * 3;
    long double lengthYardMetre = lengthInput / 1.094;
    long double lengthYardKm = lengthInput / 1094;
    long double lengthYardMM = lengthInput * 914.44;
    long double lengthYardCM = lengthInput * 91.44;
    long double lengthYardInch = lengthInput * 36;
    printf("Converted!\n\n\n");
    printf("Yards to feet: %.2Lf\nYards to Metres: %.2Lf\nYards to Kilometres: %.4Lf\nYards to Millimetres: %.2Lf\nYards to Centimetres: %.2Lf\nYards to Inches: %.2Lf", lengthYardFoot, lengthYardMetre, lengthYardKm, lengthYardMM, lengthYardCM, lengthYardInch);
  }
  else if (lengthArg == 7) {
    printf("Input how many Inches.\n");
    scanf("%Lf", &lengthInput);
    long double lengthInchFoot = lengthInput / 12;
    long double lengthInchMetre = lengthInput / 39.37;
    long double lengthInchKM = lengthInput / 39370;
    long double lengthInchMM = lengthInput * 25.4;
    long double lengthInchCM = lengthInput * 2.54;
    long double lengthInchYard = lengthInput / 36;
    printf("Converted!\n\n\n");
    printf("Inches to Feet: %.2Lf\nInches to Metres: %.2Lf\nInches to Kilometres: %.5Lf\nInches to Millimetres: %.2Lf\nInches to Centimetres: %.2Lf\nInches to Yards: %.2Lf", lengthInchFoot, lengthInchMetre, lengthInchKM, lengthInchMM, lengthInchCM, lengthInchYard);
  } else {
    printf("Invalid input. Please run the program again.");
  }

}

void speed(int speedArg) {
  clrscr;
  long double speedInput;
  printf("Convert FROM\n\n\n");
  printf("  You have 5 options. Please pick from this selection of options\n==================================================================\n");
  printf("1. Miles Per Hour\n2. Kilometres Per Hour\n3. Feet Per Second\n4. Metres Per Second\n5. Knots\n\n");
  scanf("%d", &speedArg);
  if (speedArg == 1) {
    printf("Input how many Miles Per Hour.\n");
    scanf("%Lf", &speedInput);
    long double speedMPHkph = speedInput * 1.609;
    long double speedMPHfps = speedInput * 1.467;
    long double speedMPHmps = speedInput / 2.237;
    long double speedMPHKnots = speedInput / 1.151;
    printf("Converted!\n\n\n");
    printf("Miles Per Hour to Kilometres Per Hour: %.2Lf\nMiles Per Hour to Feet Per Second: %.2Lf\nMiles Per Hour to Metres Per Second: %.2Lf\nMiles Per Hour to Knots: %.2Lf", speedMPHkph, speedMPHfps, speedMPHmps, speedMPHKnots);
  }
  else if (speedArg == 2) {
    printf("Input how many Kilometres Per Hour.\n");
    scanf("%Lf", &speedInput);
    long double speedKPHmph = speedInput / 1.609;
    long double speedKPHfps = speedInput / 1.097;
    long double speedKPHmps = speedInput / 3.6;
    long double speedKPHknots = speedInput / 1.852;
    printf("Converted!\n\n\n");
    printf("Kilometres Per Hour to Miles Per Hour: %.2Lf\nKilometres Per Hour to Feet Per Second: %.2Lf\nKilometres Per Hour to Metres Per Second: %.2Lf\nKilometres Per Hour to Knots: %.2Lf", speedKPHmph, speedKPHfps, speedKPHmps, speedKPHknots);
  }
  else if (speedArg == 3) {
    printf("Input how many Feet Per Second.\n");
    scanf("%Lf", &speedInput);
    long double speedFPSmph = speedInput / 1.467;
    long double speedFPSkph = speedInput / 1.097;
    long double speedFPSmps = speedInput / 3.281;
    long double speedFPSknots = speedInput / 1.688;
    printf("Converted!\n\n\n");
    printf("Feet Per Second to Miles Per Hour: %.2Lf\nFeet Per Second to Kilometres Per Hour: %.2Lf\nFeet Per Second to Metres Per Second: %.2Lf\nFeet Per Second to Knots: %.2Lf", speedFPSmph, speedFPSkph, speedFPSmps, speedFPSknots);
  }
  else if (speedArg == 4) {
    printf("Input how many Metres Per Second.\n");
    scanf("%Lf", &speedInput);
    long double speedMPSmph = speedInput * 2.237;
    long double speedMPSkph = speedInput * 3.6;
    long double speedMPSfps = speedInput * 3.281;
    long double speedMPSKnot = speedInput * 1.944;
    printf("Converted!\n\n\n");
    printf("Metres Per Second to Miles Per Hour: %.2Lf\nMetres Per Second to Kilometres Per Hour: %.2Lf\nMetres Per Second to Feet Per Second: %.2Lf\nMetres Per Second to Knots: %.2Lf", speedMPSmph, speedMPSkph, speedMPSfps, speedMPSKnot);
  }
  else if (speedArg == 5) {
    printf("Input how many Knots.\n");
    scanf("%Lf", &speedInput);
    long double speedKnotMPH = speedInput * 1.151;
    long double speedKnotKPH = speedInput * 1.852;
    long double speedKnotFPS = speedInput * 1.688;
    long double speedKnotMPS = speedInput / 1.944;
    printf("Converted!\n\n\n");
    printf("Knots to Miles Per Hour: %.2Lf\nKnots to Kilometres Per Hour: %.2Lf\nKnots to Feet Per Second: %.2Lf\nKnots to Metres Per Second: %.2Lf", speedKnotMPH, speedKnotKPH, speedKnotFPS, speedKnotMPS);
  } else {
    printf("Invalid input. Please run the program again.");
  }

}
void temp(int tempArg) {
  clrscr;
  long double tempInput;
  printf("Convert FROM\n\n\n");
  printf("  You have 3 options. Please pick from this selection of options\n==================================================================\n");
  printf("1. Celsius\n2. Fahrenheit\n3. Kelvin\n\n");
  scanf("%d", &tempArg);
  if (tempArg == 1) {
    printf("Input how many Celsius.\n");
    scanf("%Lf", &tempInput);
    long double tempCelciusFahrenheit = tempInput * 1.8 + 32;
    long double tempCelciusKelvin = tempInput + 273.15;
    printf("Converted!\n\n\n");
    printf("Celcius to Fahrenheit: %.2Lf\nCelcius to Kelvin: %.2Lf", tempCelciusFahrenheit, tempCelciusKelvin);
  }
  else if (tempArg == 2) {
    printf("Input how many Fahrenheit.\n");
    scanf("%Lf", &tempInput);
    long double tempFahrenheitCelcius = tempInput - 32 * 0.5556;
    long double tempFahrenheitKelvin = tempInput + 459.67 * 0.5556;
    printf("Converted!\n\n\n");
    printf("Fahrenheit to Celcius: %.2Lf\nFahrenheit to Kelvin: %.2Lf", tempFahrenheitCelcius, tempFahrenheitKelvin);
  }
  else if (tempArg == 3) {
    printf("Input how many Kelvin.\n");
    scanf("%Lf", &tempInput);
    long double tempKelvinCelcius = tempInput - 273.15;
    long double tempKelvinFahrenheit = tempInput - 273.15 * 1.8 + 32;
    printf("Converted!\n\n\n");
    printf("Kelvin to Celcius: %.2Lf\nKelvin to Fahrenheit: %.2Lf", tempKelvinCelcius, tempKelvinFahrenheit);
  } else {
    printf("Invalid input. Please run the program again.");
  }

}
void frequency (int freqArg) {
  clrscr;
  long double freqInput;
  printf("Convert FROM\n\n\n");
  printf("  You have 4 options. Please pick from this selection of options\n==================================================================\n");
  printf("1. Hertz\n2. Kilohertz\n3. Megahertz\n4. Gigahertz\n\n");
  scanf("%d", &freqArg);
  if (freqArg == 1) {
    printf("Input how many Hertz.\n");
    scanf("%Lf", &freqInput);
    long double freqHertzKilohertz = freqInput / 1000;
    long double freqHertzMegahertz = freqInput / 1000000;
    long double freqHertzGigahertz = freqInput / 1000000000;
    printf("Converted!\n\n\n");
    printf("Hertz to Kilohertz: %.3Lf\nHertz to Megahertz: %.6Lf\nHertz to Gigahertz: %.9Lf", freqHertzKilohertz, freqHertzMegahertz, freqHertzGigahertz);
  }
  else if (freqArg == 2) {
    printf("Input how many Kilohertz.\n");
    scanf("%Lf", &freqInput);
    long double freqKilohertzHertz = freqInput * 1000;
    long double freqKilohertzMegahertz = freqInput / 1000;
    long double freqKilohertzGigahertz = freqInput / 1000000;
    printf("Converted!\n\n\n");
    printf("Kilohertz to Hertz: %.2Lf\nKilohertz to Megahertz: %.3Lf\nKilohertz to Gigahertz: %.6Lf", freqKilohertzHertz, freqKilohertzMegahertz, freqKilohertzGigahertz);
  }
  else if (freqArg == 3) {
    printf("Input how many Megahertz.\n");
    scanf("%Lf", &freqInput);
    long double freqMegahertzHertz = freqInput * 1000000;
    long double freqMegahertzKilohertz = freqInput * 1000;
    long double freqMegahertzGigahertz = freqInput / 1000;
    printf("Converted!\n\n\n");
    printf("Megahertz to Hertz: %.2Lf\nMegahertz to Kilohertz: %.2Lf\nMegahertz to Gigahertz: %.3Lf", freqMegahertzHertz, freqMegahertzKilohertz, freqMegahertzGigahertz);
  }
  else if (freqArg == 4) {
    printf("Input how many Gigahertz.\n");
    scanf("%Lf", &freqInput);
    long double freqGigahertzHertz = freqInput * 1000000000;
    long double freqGigahertzKilohertz = freqInput * 1000000;
    long double freqGigahertzMegahertz = freqInput * 1000;
    printf("Converted!\n\n\n");
    printf("Gigahertz to Hertz: %.2Lf\nGigahertz to Kilohertz: %.2Lf\nGigahertz to Megahertz: %.2Lf", freqGigahertzHertz, freqGigahertzKilohertz, freqGigahertzMegahertz);
  } else {
    printf("Invalid input. Please run the program again.");
  }

}
void area(int areaArg) {
  clrscr;
  long double areaInput;
  printf("Convert FROM\n\n\n");
  printf("  You have 8 options. Please pick from this selection of options\n==================================================================\n");
  printf("1. Square Kilometre\n2. Square Metre\n3. Square Mile\n4. Square Yard\n5. Square Foot\n6. Square Inch\n7. Hectare\n8. Acre\n\n");
  scanf("%d", &areaArg);
  if (areaArg == 1){
    printf("Input how many Square Kilometres.\n");
    scanf("%Lf", &areaInput);
    long double squareKMSquareM = areaInput * 1000000;
    long double squareKMSquareMi = areaInput / 2.59;
    long double squareKMSquareYard = areaInput * 1196000;
    long double squareKMSquareFoot = areaInput * 10760000;
    long double squareKMSquareInch = areaInput * 1550000000;
    long double squareKMHectare = areaInput * 100;
    long double squareKMAcre = areaInput * 247.1;
    printf("Converted!\n\n\n");
    printf("Square Kilometres to Square Metres: %.2Lf\nSquare Kilometres to Square Miles: %.2Lf\nSquare Kilometres to Square Yards: %.2Lf\nSquare Kilometres to Square Feet: %.2Lf\nSquare Kilometres to Square Inches: %.2Lf\nSquare Kilometres to Hectares: %.2Lf\nSquare Kilometres to Acres: %.2Lf", squareKMSquareM, squareKMSquareMi, squareKMSquareYard, squareKMSquareFoot, squareKMSquareInch, squareKMHectare, squareKMAcre);
  }
  else if (areaArg == 2) {
    printf("Input how many Square Metres.\n");
    scanf("%Lf", &areaInput);
    long double squareMSquareKM = areaInput / 1000000;
    long double squareMSquareMi = areaInput / 2590000;
    long double squareMSquareYard = areaInput * 1.196;
    long double squareMSquareFoot = areaInput * 10.764;
    long double squareMSquareInch = areaInput * 1550;
    long double squareMHectare = areaInput / 10000;
    long double squareMAcre = areaInput / 4047;
    printf("Converted!\n\n\n");
    printf("Square Metres to Square Kilometres: %.6Lf\nSquare Metres to Square Miles: %.7Lf\nSquare Metres to Square Yards: %.2Lf\nSquare Meters to Square Feet: %.2Lf\nSquare Metres to Square Inches: %.2Lf\nSquare Metres to Hectares: %.4Lf\nSquare Metres to Acres: %.4Lf", squareMSquareKM, squareMSquareMi, squareMSquareYard, squareMSquareFoot, squareMSquareInch, squareMHectare, squareMAcre);
  }
  else if (areaArg == 3) {
    printf("Input how many Square Miles.\n");
    scanf("%Lf", &areaInput);
    long double squareMiSquareKM = areaInput * 2.59;
    long double squareMiSquareM = areaInput * 2590000;
    long double squareMiSquareYard = areaInput * 3098000;
    long double squareMiSquareFoot = areaInput * 27880000;
    long double squareMiSquareInch = areaInput * 4014000000;
    long double squareMiHectare = areaInput * 259; 
    long double squareMiAcre = areaInput * 640;
    printf("Converted!\n\n\n");
    printf("Square Miles to Square Kilometres: %.2Lf\nSquare Miles to Square Metres: %.2Lf\nSquare Miles to Square Yards: %.2Lf\nSquare Miles to Square Feet: %.2Lf\nSquare Miles to Square Inches: %.2Lf\nSquare Miles to Hectares: %.2Lf\nSquare Miles to Acres: %.2Lf", squareMiSquareKM, squareMiSquareM, squareMiSquareYard, squareMiSquareFoot, squareMiSquareInch, squareMiHectare, squareMiAcre);
  }
  else if (areaArg == 4) {
    printf("Input how many Square Yards.\n"); 
    scanf("%Lf", &areaInput);
    long double squareYardSquareKM = areaInput * 1196000;
    long double squareYardSquareM = areaInput / 1.196;
    long double squareYardSquareMi = areaInput / 3098000;
    long double squareYardSquareFoot = areaInput * 9;
    long double squareYardSquareInch = areaInput * 1296;
    long double squareYardHectare = areaInput * 259;
    long double squareYardAcre = areaInput / 4840; 
    printf("Converted!\n\n\n");
    printf("Square Yards to Square Kilometres: %.2Lf\nSquare Yards to Square Metres: %.2Lf\nSquare Yards to Square Miles: %.7Lf\nSquare Yards to Square Feet: %.2Lf\nSquare Yards to Square Inches: %.2Lf\nSquare Yards to Hectares: %.2Lf\nSquare Yards to Acres: %.4Lf", squareYardSquareKM, squareYardSquareM, squareYardSquareMi, squareYardSquareFoot, squareYardSquareInch, squareYardHectare, squareYardAcre);
  }
  else if (areaArg == 5) {
    printf("Input how many Square Feet.\n");
    scanf("%Lf", &areaInput);
    long double squareFootSquareKM = areaInput / 10760000;
    long double squareFootSquareM = areaInput / 10.764;
    long double squareFootSquareMi = areaInput / 27880000;
    long double squareFootSquareYard = areaInput / 9;
    long double squareFootSquareInch = areaInput * 1296;
    long double squareFootHectare = areaInput / 107600;
    long double squareFootAcre = areaInput / 43560;
    printf("Converted!\n\n\n");
    printf("Square Feet to Square Kilometres: %.8Lf\nSquare Feet to Square Metres: %.2Lf\nSquare Feet to Square Miles: %.8Lf\nSquare Feet to Square Yards: %.2Lf\nSquare Feet to Square Inches: %.2Lf\nSquare Feet to Hectares: %.6Lf\nSquare Feet to Acres: %.5Lf", squareFootSquareKM, squareFootSquareM, squareFootSquareMi, squareFootSquareYard, squareFootSquareInch, squareFootHectare, squareFootAcre);
  } 
  else if (areaArg == 6) {
    printf("Input how many Square Inches.\n");
    scanf("%Lf", &areaInput);
    long double squareInchSquareKm = areaInput / 1550000000;
    long double squareInchSquareM = areaInput / 1550;
    long double squareInchSquareMi = areaInput / 4014000000;
    long double squareInchSquareYard = areaInput / 1296;
    long double squareInchSquareFoot = areaInput / 144;
    long double squareInchHectare = areaInput / 15500000;
    long double squareInchAcre = areaInput / 6273000;
    printf("Converted!\n\n\n");
    printf("Square Inch to Square Kilometres: %.10Lf\nSquare Inch to Square Metres: %.4Lf\nSquare Inch to Square Miles: %.10Lf\nSquare Inch to Square Yard: %.4Lf\nSquare Inch to Square Feet: %.2Lf\nSquare Inch to Hectare: %.8Lf\nSquare Inch to Acre: %.7Lf", squareInchSquareKm, squareInchSquareM, squareInchSquareMi, squareInchSquareYard, squareInchSquareFoot, squareInchHectare, squareInchAcre);
  }
  else if (areaArg == 7) {
    printf("Input how many Hectares.\n");
    scanf("%Lf", &areaInput);
    long double hectareSquareKm = areaInput / 100;
    long double hectareSquareM = areaInput * 10000;
    long double hectareSquareMi = areaInput / 259;
    long double hectareSquareYard = areaInput * 11960;
    long double hectareSquareFoot = areaInput * 107600;
    long double hectareSquareInch = areaInput * 1550000000;
    long double hectareAcre = areaInput * 2.471;
    printf("Converted!\n\n\n");
    printf("Hectares to Square Kilometres: %.2Lf\nHectares to Square Metres: %.2Lf\nHectares to Square Miles: %.3Lf\nHectares to Square Yards: %.2Lf\nHectares to Square Feet: %.2Lf\nHectares to Square Inches: %.2Lf\nHectares to Acres: %.2Lf", hectareSquareKm, hectareSquareM, hectareSquareMi, hectareSquareYard, hectareSquareFoot, hectareSquareInch, hectareAcre);
  }
  else if (areaArg == 8) {
    printf("Input how many Acres.\n");
    scanf("%Lf" , &areaInput);
    long double acreSquareKM = areaInput / 247.1;
    long double acreSquareM = areaInput / 4047;
    long double acreSquareMi = areaInput / 640;
    long double acreSquareYard = areaInput * 4840;
    long double acreSquareFoot = areaInput * 43560;
    long double acreSquareInch = areaInput / 6273000;
    long double acreHectare = areaInput / 2.471;
    printf("Converted!\n\n\n");
    printf("Acres to Square Kilometres: %.3Lf\nAcres to Square Metres: %.4Lf\nAcres to Square Miles: %.3Lf\nAcres to Square Yards: %.2Lf\nAcres to Square Feet: %.2Lf\nAcres to Square Inches: %.7Lf\nAcres to Hectares: %.2Lf", acreSquareKM, acreSquareM, acreSquareMi, acreSquareYard, acreSquareFoot, acreSquareInch, acreHectare);
  } else {
    printf("Invalid input. Please run the program again.");
  }

}
void time(int timeArg) {
  clrscr;
  long double timeInput;
  printf("Convert FROM\n\n\n");
  printf("  You have 5 options. Please pick from this selection of options\n==================================================================\n");
  printf("1. Milliseconds\n2. Seconds\n3. Minutes\n4. Hours\n5. Days\n\n");
  scanf("%d", &timeArg);
  if (timeArg == 1) {
    printf("Input how many Milliseconds.\n");
    scanf("%Lf", &timeInput);
    long double msS = timeInput / 1000;
    long double msM = timeInput / 60000;
    long double msH = timeInput / 3600000;
    long double msD = timeInput / 86400000;
    printf("Converted!\n\n\n");
    printf("Milliseconds to Seconds: %.3Lf\nMilliseconds to Minutes: %.5Lf\nMilliseconds to Hours: %.7Lf\nMilliseconds to Days: %.8Lf", msS, msM, msH, msD);
  }
  else if (timeArg == 2) {
    printf("Input how many Seconds.\n");
    scanf("%Lf", &timeInput);
    long double sMs = timeInput * 1000;
    long double sM = timeInput / 60;
    long double sH = timeInput / 3600;
    long double sD = timeInput / 86400;
    printf("Converted!\n\n\n");
    printf("Seconds to Milliseconds: %.2Lf\nSeconds to Minutes: %.2Lf\nSeconds to Hours: %.4Lf\nSeconds to Days: %.5Lf", sMs, sM, sH, sD);
  }
  else if (timeArg == 3) {
    printf("Input how many Minutes.\n");
    scanf("%Lf", &timeInput);
    long double mMs = timeInput * 60000;
    long double mS = timeInput * 60;
    long double mH = timeInput / 60;
    long double mD = timeInput / 1440;
    printf("Converted!\n\n\n");
    printf("Minutes to Milliseconds: %.2Lf\nMinutes to Seconds: %.2Lf\nMinutes to Hours: %.2Lf\nMinutes to Days: %.4Lf", mMs, mS, mH, mD);
  }
  else if (timeArg == 4) {
    printf("Input how many Hours.\n");
    scanf("%Lf", &timeInput);
    long double hMs = timeInput * 3600000;
    long double hS = timeInput * 3600;
    long double hM = timeInput * 60;
    long double hD = timeInput / 24;
    printf("Converted!\n\n\n");
    printf("Hours to Milliseconds: %.2Lf\nHours to Seconds: %.2Lf\nHours to Minutes: %.2Lf\nHours to Days: %.2Lf", hMs, hS, hM, hD);
  }
  else if (timeArg == 5) {
    printf("Input how many Days.\n");
    scanf("%Lf", &timeInput);
    long double dMs = timeInput * 86400000;
    long double dS = timeInput * 86400;
    long double dM = timeInput * 1440;
    long double dH = timeInput * 24;
    printf("Converted!\n\n\n");
    printf("Days to Milliseconds: %.2Lf\nDays to Seconds: %.2Lf\nDays to Minutes: %.2Lf\nDays to Hours: %.2Lf", dMs, dS, dM, dH);
  } else {
    printf("Invalid input. Please run the program again.");
  }

}
void conversion() {
    clrscr;
    printf("  Welcome to the conversion main menu. Please pick from this selection of options\n===================================================================================\n");
    printf("1. Mass\n2. Digital Storage\n3. Length\n4. Speed\n5. Temperature\n6. Frequency\n7. Area\n8. Time\n\n");
    int conversionOption;
    scanf("%d", &conversionOption);
    if (conversionOption == 1) {
      mass(0);
    } else if (conversionOption == 2) {
      storage(0);
    } else if (conversionOption == 3) {
      length(0);
    } else if (conversionOption == 4) {
      speed(0);
    } else if (conversionOption == 5) {
      temp(0);
    } else if (conversionOption == 6) {
      frequency(0);
    } else if (conversionOption == 7) {
      area(0);
    } else if (conversionOption == 8) {
      time(0);
    } else {
    printf("Invalid input. Please run the program again.");
    }
}
void theMural() {
clrscr;
printf("__$$$$_ _______ _______ _______ _______ ______ _$$__ $$___$$_\n_$$____ _______ _______ _______ _$$$$__ ______ _$$__ $$___$$_\n$$_____ _$$$$__ $$$$$__ $$__$$_ $$__$$_ $$_$$_ $$$$_ $$___$$_\n$$_____ $$__$$_ $$__$$_ $$__$$_ $$$$$$_ $$$_$_ _$$__ $$___$$_\n_$$____ $$__$$_ $$__$$_ _$$$$__ $$_____ $$____ _$$__ $$___$$_\n__$$$$_ _$$$$__ $$__$$_ __$$___ _$$$$$_ $$____ __$$_ _$$$$$__");
printf("\nCredits: Tristan. I am the main dev and only dev at this point. Check out my github at github.com/photonmastr/");
printf("\n\n\nThank you for using my program ilyyy");
}
int main(int argc, char *argv[]) {
    int mainMenuSelect;
    clrscr;
    printf("  Hi, welcome to ConvertU-CCLI, ConvertU-CLI written in C\n");
    printf("===========================================================\n");
    printf("                 Press any key to continue.");
    getchar();
    clrscr;
    printf("  Welcome to the main menu. Pick your options.\n");
    printf("================================================\n");
    printf("1. Get to converting\n");
    printf("2. ConvertU-CCLI Mural?\n");
    scanf("%d", &mainMenuSelect);
    if (mainMenuSelect == 1) { 
        conversion();
    } else if (mainMenuSelect == 2) {
        theMural();
    } else {
        printf("Invalid option, please run the program again");
    }
    return EXIT_SUCCESS;
}
