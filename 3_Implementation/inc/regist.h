
   
#ifndef REGIST_C
#define REGIST_C

 // Checks for registration details of new patients
int regist_status(long pd );

// Checks details from the pre registered patients
int existregist();

// Checks how many doses should be given
int vaccine_status(int );

// Structure that stores all details of a patient
typedef struct patient{
    int age;
    long aadhar;
    int ph_number;
    int secret_code;
    int vaccine_type;
    int vaccine_doses;
}patient_details;

// variable pd that stores details of upto 1000 patients
patient_details pd[1000];

#endif
© 2021 GitHub, Inc.
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
Loading complete
