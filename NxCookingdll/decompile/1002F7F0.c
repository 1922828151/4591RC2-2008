/*
 * func-name: sub_1002F7F0
 * func-address: 0x1002f7f0
 * callers: 0x10024be0
 * callees: 0x10001050, 0x1000d700, 0x100189f0, 0x1002df90, 0x1002e2e0, 0x1002f150, 0x1002f4a0, 0x1002f680
 */

char __thiscall sub_1002F7F0(char *this, float *a2)
{
  float *v2; // ebx
  float v4; // ecx
  int v5; // esi
  int v6; // edx
  double v7; // st7
  bool v8; // zf
  int v9; // eax
  int v10; // edi
  unsigned int v11; // esi
  unsigned int i; // eax
  int v13; // ebx
  char v14; // bl
  int v16; // [esp+10h] [ebp-44h]
  int v17[13]; // [esp+20h] [ebp-34h] BYREF

  v2 = a2;
  v4 = *a2;
  if ( *(_DWORD *)a2 < 3u )
    goto LABEL_26;
  v5 = *((_DWORD *)a2 + 5);
  if ( !v5 )
  {
    if ( LODWORD(v4) % 3 )
      goto LABEL_26;
  }
  if ( *((_DWORD *)a2 + 8) && *((_DWORD *)a2 + 7) < 2u )
    goto LABEL_26;
  if ( LODWORD(v4) > 0xFFFF && ((_BYTE)a2[6] & 2) != 0 )
    goto LABEL_26;
  if ( !*((_DWORD *)a2 + 4) )
    goto LABEL_26;
  v6 = 12;
  if ( *((_DWORD *)a2 + 2) < 0xCu )
    goto LABEL_26;
  if ( !v5 )
    goto LABEL_13;
  if ( ((_BYTE)a2[6] & 2) != 0 )
  {
    if ( *((_DWORD *)a2 + 3) >= 6u )
      goto LABEL_13;
LABEL_26:
    sub_1000D700(
      1,
      (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Cooking\\src\\TriangleMeshBuilder.cpp",
      35,
      0,
      "TriangleMesh::loadFromDesc: desc.isValid() failed!",
      v16);
    return 0;
  }
  if ( *((_DWORD *)a2 + 3) < 0xCu )
    goto LABEL_26;
LABEL_13:
  v7 = a2[12];
  qmemcpy(v17, a2, sizeof(v17));
  *((float *)this + 25) = v7;
  *((float *)this + 44) = v2[9];
  v8 = *((_DWORD *)this + 44) == 255;
  *((float *)this + 45) = v2[10];
  v9 = *((_DWORD *)v2 + 6);
  *((_DWORD *)this + 24) = v9;
  if ( !v8 )
    *((_DWORD *)this + 24) = v9 & 0xFFFFFFFB;
  v10 = 0;
  if ( !v17[5] )
  {
    v11 = v17[0];
    v17[6] &= ~2u;
    v17[3] = 12;
    v17[1] = v17[0] / 3u;
    v10 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 4 * v17[0], 262);
    for ( i = 0; i < v11; ++i )
      *(_DWORD *)(v10 + 4 * i) = i;
    v17[5] = v10;
  }
  if ( !sub_1002F4A0((int)this, v6, v17) )
    return 0;
  if ( v10 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v10);
  unknown_libname_1(this + 4);
  sub_1002E2E0((_DWORD **)&a2, *((_DWORD *)this + 44), COERCE_INT(*((float *)this + 45)));
  v13 = *((_DWORD *)v2 + 11);
  if ( v13 )
    (*(void (__thiscall **)(char *, int))(*(_DWORD *)this + 12))(this, v13);
  sub_1002F680((int)this);
  sub_1002F150((int)&a2, v13);
  v14 = sub_100189F0(0);
  NxReportCooking();
  return v14;
}
