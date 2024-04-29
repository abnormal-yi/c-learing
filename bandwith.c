#include <stdio.h>

/**
 * Calculates the estimated download time for a file given its size and the download speed.
 *
 * This function prompts the user to enter the file size in megabytes and the download speed in megabits per second,
 * then calculates the estimated download time in minutes and prints the result.
 */
int main()
{
    // Declare variables
    float ukubwa_wa_file_MB, kasi_ya_Mbps, muda_utakao_tumika_kwa_dakika;

    printf("Enter the file size in megabytes: ");
    scanf("%f", &ukubwa_wa_file_MB);

    printf("Enter the download speed in megabits per second: ");
    scanf("%f", &kasi_ya_Mbps);

    // Convert file size from megabytes to megabits
    ukubwa_wa_file_MB *= 8;

    /* Calculate download time in minutes*/
    muda_utakao_tumika_kwa_dakika = (ukubwa_wa_file_MB / kasi_ya_Mbps) / 60;

    printf("Tuna Dakika Ngap..??  : %.2f minutes\n", muda_utakao_tumika_kwa_dakika);

    return 0;
}
