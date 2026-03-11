/*
 * func-name: sub_100115C0
 * func-address: 0x100115c0
 * callers: 0x10011680
 * callees: 0x10001160, 0x1001b720, 0x1001b770, 0x1001d650
 */

int __usercall sub_100115C0@<eax>(int *a1@<eax>, int a2@<ebx>, int *a3@<edi>)
{
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // esi
  _DWORD v13[6]; // [esp+4h] [ebp-A8h] BYREF
  _BYTE v14[4]; // [esp+1Ch] [ebp-90h] BYREF
  int v15; // [esp+20h] [ebp-8Ch]
  int v16; // [esp+84h] [ebp-28h]
  float v17; // [esp+A0h] [ebp-Ch]
  char v18; // [esp+A9h] [ebp-3h]

  if ( !*(_DWORD *)(a2 + 48)
    && !byte_1005B1B8
    && (!dword_100580A4
     || sub_10001160(
          (_DWORD *)dword_100580A4,
          107,
          (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\PenetrationMap.cpp",
          876,
          &byte_1005B1B8,
          "mesh.getOpcodeModel()",
          0)) )
  {
    __debugbreak();
  }
  sub_1001B720(v14);
  v4 = *a3;
  v17 = 3.4028235e38;
  v5 = a3[1];
  v6 = a3[2];
  v15 &= 0xFFFFFFFC;
  v13[0] = v4;
  v7 = *a1;
  v13[1] = v5;
  v8 = a1[1];
  v13[3] = v7;
  v9 = *(_DWORD *)(a2 + 48);
  v13[4] = v8;
  v13[2] = v6;
  v10 = a1[2];
  v18 = 0;
  v13[5] = v10;
  sub_1001D650(v13, v9, 0, 0);
  v11 = v16;
  sub_1001B770(v14);
  return v11;
}
