/*
 * func-name: ?EditSurface@Terrain@@QAEXAAVVector@@@Z
 * func-address: 0x10167bb0
 * callers: 0x10169d00
 * callees: 0x10167720, 0x101a26c0
 */

void __thiscall Terrain::EditSurface(Terrain *this, struct Vector *a2)
{
  int v3; // ebp
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  double v7; // st7
  double v8; // st7
  LONG v9; // ecx
  int v10; // eax
  float v11; // [esp+0h] [ebp-2Ch]
  float v12; // [esp+4h] [ebp-28h]
  int v13; // [esp+8h] [ebp-24h]
  RECT rcSrc2; // [esp+1Ch] [ebp-10h] BYREF

  v3 = *((_DWORD *)this + 381);
  if ( v3 != 6 )
  {
    v4 = (int)(*(float *)a2 - *((float *)this + 214));
    v5 = (int)(*((float *)a2 + 2) - *((float *)this + 216));
    v6 = (int)(*((float *)this + 378) * *((float *)this + 361));
    v7 = *((float *)this + 430);
    rcSrc2.top = v5 - v6;
    v13 = *((_DWORD *)this + 432);
    v12 = v7;
    v8 = *((float *)this + 379);
    rcSrc2.left = v4 - v6;
    v11 = v8;
    v9 = v6 + v4;
    rcSrc2.bottom = v5 + v6;
    v10 = *((_DWORD *)this + 293);
    rcSrc2.right = v9;
    sub_10167720((_DWORD *)this + 346, &rcSrc2, v10, v3, v11, v12, v13);
  }
}
