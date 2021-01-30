/*One private Car Parking service CPS offers service for cars to be parked in their area for specific duration.
 * CPS don't allow car drivers to enter and choose location rather they hand over the keys and cars at the gate from where the staff takes cars into parking zone where each car is parked at the next available position of last car
 * parked and returns the key with CPS Tag to Car Driver. If Parking Slots are full, extra car cannot be parked.
 * CPS maintains the record for each car placed at particular slot with car plate number, so that when Owner comes to take his/her Car it will be easy to find the exact position of where the Car has parked.
 * For example, list of Car Plate Numbers can be as per Car's position in CPS Parking area.
 * 1. The Park(String plateNumber) function which takes plateNumber of newly entered Car and allocate a position in list. This is adding Car to parking area to the next position of last car parked.
 * 2. The Search(String plateNumber) function should return the Car Position as output for the given input is Car Plate Number.
 *
 * Name Plate String can have minimum 6 and maximum 12 numbers of characters. Ignore decorating or separator characters(DataStructure used to hold CPS car parking data must be initialized with following Car numbers for better output.)
 * CPS = [MH04CC2, MH04C2820, MH04BB3232, MH04CC2113, MH04CC2878, MH04BB8, MH04CC2888, MH04CC1313, MH04CC2222, MH04C1201, MH04CC555, MH04C6565, MH04A7]
 *
 * Input should be as follows:
 * 1
 * MHCC2222
 * Note: 1 should be entered for car parking and 2 should be entered for car searching along with car plate number.
 *
 * Output must be in format as follows:
 * 1. "CAR PARKED AT POSITION:<number>", IF OPTION 1 IS SELECTED WITH VALID CAR PLATE NUMBER
 * 2. "CAR POSITION:<number>", IF OPTION 2 IS SELECTED AND VALID CAR NUMBER IS ENTERED WHICH IS ALREADY PRESENT IN CPS
 * 3. "CAR DOESNOT EXISTS", IF OPTION 2 IS SELECTED AND VALID CAR NUMBER IS ENTED WHICH IS NOT PRESENT IN CPS
 * 4. "INVALID INPUT", IF OPTION ENTERED IS OTHER THAN THE VALUE 1 OR 2 OR IF INVALID CAR NUMBER IS ENTERED
 *
 * TEST CASE1:
 * Example
 * INPUT VALUE:
 * 2
 * MH04CC2878
 * OUTPUT VALUE:
 * CAR POSITION:5*/
