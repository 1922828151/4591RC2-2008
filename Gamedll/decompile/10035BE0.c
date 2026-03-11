/*
 * func-name: sub_10035BE0
 * func-address: 0x10035be0
 * callers: 0x10009a75
 * callees: 0x10001d02, 0x10001dfc, 0x102c9ea8
 */

int __usercall sub_10035BE0@<eax>(float *a1@<ecx>, double a2@<st0>)
{
  int v3; // eax
  int result; // eax
  int v5; // edi
  double v6; // st7
  double v7; // st6
  double v8; // st5
  bool v9; // c0
  double v10; // st7
  float v11; // [esp+8h] [ebp-18h]
  float v12; // [esp+Ch] [ebp-14h]
  float v13; // [esp+10h] [ebp-10h]
  float v14; // [esp+14h] [ebp-Ch]
  float v15; // [esp+1Ch] [ebp-4h]

  v3 = sub_10001DFC(*(_DWORD *)(*(_DWORD *)a1 + 292));
  result = _RTDynamicCast(
             v3,
             0,
             &GameClient::WorldObject `RTTI Type Descriptor',
             &GameClient::Robot `RTTI Type Descriptor',
             0);
  v5 = result;
  if ( result )
  {
    v14 = *(float *)(result + 24);
    v15 = *(float *)(result + 32);
    sub_10001D02();
    v11 = a2 * a1[16] + v14;
    v12 = 0.0;
    sub_10001D02();
    v13 = 0.0 * a1[16] + v15;
    v6 = *(float *)(v5 + 328) * a1[18];
    v7 = v11;
    v8 = v13;
    if ( a1[26] - v6 < v11 || a1[23] + v6 > v7 || a1[28] - v6 < v8 )
    {
      v10 = v13;
    }
    else
    {
      v9 = v8 < v6 + a1[25];
      v10 = v13;
      if ( !v9 )
        goto LABEL_9;
    }
    v11 = -v7;
    v12 = -0.0;
    v13 = -v10;
LABEL_9:
    result = LODWORD(v13);
    a1[13] = v11;
    a1[14] = v12;
    a1[15] = v13;
  }
  return result;
}
