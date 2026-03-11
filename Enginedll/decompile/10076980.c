/*
 * func-name: ?AddSphere@ClothSimulator@@QAEPAXXZ
 * func-address: 0x10076980
 * callers: 0x10076e80
 * callees: 0x10077a50, 0x101a2534
 */

float *__thiscall ClothSimulator::AddSphere(ClothSimulator *this)
{
  float *v2; // eax
  float *v3; // esi
  int v5; // [esp+8h] [ebp-4h] BYREF

  v2 = (float *)operator new(0x10u);
  if ( v2 )
  {
    v3 = v2;
    *v2 = 0.0;
    v2[1] = 0.0;
    v5 = (int)v2;
    v2[2] = 0.0;
    sub_10077A50((int)this, (int)&v5);
    return v3;
  }
  else
  {
    v5 = 0;
    sub_10077A50((int)this, (int)&v5);
    return 0;
  }
}
