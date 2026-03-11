/*
 * func-name: sub_100043E0
 * func-address: 0x100043e0
 * callers: 0x10023900, 0x1002f680
 * callees: 0x10003600, 0x100042e0, 0x10035665
 */

int __cdecl sub_100043E0(float *a1, unsigned int a2, int a3)
{
  double v3; // st7
  float v5; // [esp+10h] [ebp-20h] BYREF
  float v6; // [esp+14h] [ebp-1Ch]
  float v7; // [esp+18h] [ebp-18h]
  float v8; // [esp+1Ch] [ebp-14h]
  float v9[3]; // [esp+20h] [ebp-10h] BYREF
  float v10; // [esp+2Ch] [ebp-4h]

  if ( !a2 || !a3 )
    return 0;
  sub_10003600(v9, a2, a3);
  sub_100042E0(&v5, a3, a2);
  if ( (_fpclass(v5) & 0x207) != 0
    || (_fpclass(v6) & 0x207) != 0
    || (_fpclass(v7) & 0x207) != 0
    || (_fpclass(v8) & 0x207) != 0
    || (v3 = v8, v8 > (double)v10)
    || v3 < 0.0 )
  {
    *a1 = v9[0];
    a1[1] = v9[1];
    a1[2] = v9[2];
    a1[3] = v10;
    return 1;
  }
  else
  {
    *a1 = v5;
    a1[1] = v6;
    a1[2] = v7;
    a1[3] = v3;
    return 2;
  }
}
