# Requirements
## Introduction
The deployment of covid-19 vaccines in India was done in a sudden burst and thus the tracking became very complicated. 
Due to multiple input and output commands on the server, it resulted in several slow running issues and crashes. 
The Aadhar details were used to allot the vaccines and hence it operated on a central server.
To avoid the use of central server for all commmands, a local server will be loaded with the vaccine-registered data. 
Local verification and completion of vaccination data will be processed locally and will be loaded back to the main server by the end of day.

Each vaccine centre will operate locally to register and allot vaccines. 
The basic registration can be done online and schedules are set as desired by the patient. Assuming a vaccination centre can vaccinate around 100 people in a day. 
The data handling for online basic registration will be mostly done in the day time and the data acquired by the local centres of vaccinated people can be handled in the night.

The local server must store the data of around 100 people where the allocated online registration data will be loaded onto the local server of that local centre. 
Verification of the data is done based on the details provided by the patient. Once completed, the data of the vaccinated will be sent back for future use and reference.
### Advantages
* Smoother data handling.
* Pre data readily available for verification.
* Flexibility to add new registrations limited with server alloted memory.
### Disadvantages
* Cannot add large number of new registrations due to local server limitations.
* Encryption is not enabled to protect the data.
* OTP verification is not activated for new registrations.
## SWOT Analysis
![SWOT analysis](https://user-images.githubusercontent.com/89698000/132556785-561d19ab-c53d-4658-8138-401da25ce78e.png)
## 4 W's and 1 H
### Who
* Patient who needs to be vaccinated.
### What
* Verify the details of the patient using the alloted data.
### When
* During the time alloted for vaccination.
### Where
* Local vaccination centre.
### How
* Online registration and on field verification using local server.

## High Level Requirements
| ID | Description | Status (Implemented/Future) |
| --- | --- | --- |
| HR01 | System should be able to access pre loaded registration data for verification | Implemented |
| HR02 | User should be able to add new registrations | Implemented |
| HR03 | System should recognize vaccinated patients | Implemented |
| HR04 | OTP generated verification for secure registration | Future |
| HR05 | System should recognize invalid credentials | Future |
| HR06 | System should be updated with the time interval between two doses | Future |

## Low Level Requirement
| ID | Description | Status (Implemented/Future) |
| --- | --- | --- |
| LR01 | Only new user must be given an option to select vaccine type | Implemented |
| LR02 | Total quantity of vaccines used must be shown by EOD | Implemented |
| LR03 | Full list of patients vaccinated must be set as output | Implemented |
| LR04 | Remaining and present stock of vaccines must be tracked | Future |
| LR05 | Vaccine vials must be tracked for its use within a day | Future |

# Architecture
## Flow chart
![Flowchart1 (1)](https://user-images.githubusercontent.com/89698000/132567227-09aa32d3-9fd8-46e0-ad41-43367582048a.jpg)
## UML Use case
![Untitled Workspace (5)](https://user-images.githubusercontent.com/89698000/132359625-59a60ead-ddf0-48d5-a03b-39c03fbb2a1d.jpg)

# Implementation
## Introduction
This folder conatins all the coding files as well as the resources and testing files neede for proper execution of program

## Instructions to execute
1. Clone my repository
2. Go to 3_Implementation folder
3. Make sure your system meets all software and hardware requirements
4. Run "make run" command in terminal for main code execution
5. Run "make run_test" command in terminal for test code execution

| Folder | Description |
| --- | --- |
| inc | Contains header files |
| src | Contains additional source file for compilation |
| test | Contains unit testing files |

# VaccineRegistration
## High Level Test Plan
| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Check patient registration status | 123 (aadhar no) | {-1} |  (not found) |
| 02 | Check patient registration status | 123 (aadhar no) | {0,1} |  (found) |
| 03 | Check patient vaccination status | 3 (patient id) | {>0} | (vaccinated) |
## Low Level Test Plan
| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Check patient registration status | 125 (aadhar no) | 0 | 0 (registered, not vaccinated) |
| 02 | Check patient registration status | 130 (aadhar no) | 1 | 1 (registered, vaccinated) |
| 03 | Check patient vaccination status | 3 (patient id) | 1 | 1 (first dose) |
| 04 | Check patient vaccination status | 3 (patient id) | 2 | 2 (second dose) |
| 05 | Check patient vaccination status | 3 (patient id) | 3 | 3 (already vaccinated) |



