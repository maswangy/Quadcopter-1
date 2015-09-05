#define DEG_TO_RAD_RATIO    0.0174532f
#define RAD_TO_DEG_RATIO    57.2957795f

typedef struct
{
    // Measured noise
    float data_noise;
    // Measured data
    float data_measured;
    // prior error covariance
    float P_EC;
    // Time Update
    float data_updated;
    // Measurement Update
    float K_factor;
    float data_estimated;
    float P_EC_estimated;
} Kalman;

extern int ADXL345_getRealData(float *accl);
extern int L3G4200D_getRealData(float *gyro);
extern int HMC5883L_getRealData(float *magn);
