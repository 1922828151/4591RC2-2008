/*
 * func-name: ?UpdateSphere@ClothSimulator@@QAEXPAXAAVVector@@M@Z
 * func-address: 0x10076540
 * callers: none
 * callees: none
 */

void __thiscall ClothSimulator::UpdateSphere(ClothSimulator *this, float *a2, struct Vector *a3, float a4)
{
  *a2 = *(float *)a3;
  a2[1] = *((float *)a3 + 1);
  a2[2] = *((float *)a3 + 2);
  if ( a4 != -1.0 )
    a2[3] = a4;
}
