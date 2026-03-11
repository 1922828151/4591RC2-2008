/*
 * func-name: sub_100063D0
 * func-address: 0x100063d0
 * callers: 0x10002630
 * callees: 0x100079c0, 0x1000e510
 */

int __userpurge sub_100063D0@<eax>(_BYTE *a1@<edi>, int a2)
{
  *(_BYTE *)a2 = *a1;
  *(_DWORD *)(a2 + 8) = sub_1000E510();
  *(_DWORD *)(a2 + 12) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 28) = 0;
  sub_100079C0(a2, a1);
  return a2;
}
