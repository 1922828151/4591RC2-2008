/*
 * func-name: sub_10048C00
 * func-address: 0x10048c00
 * callers: 0x10048f10
 * callees: 0x100096e0, 0x100099b0, 0x10009fe0, 0x1000e030, 0x10011870, 0x10012e80, 0x10013210, 0x100489d0, 0x10048b60, 0x10048b90, 0x10048bd0, 0x101a2500, 0x101a2522
 */

int __thiscall sub_10048C00(_DWORD *this, int a2, int a3, unsigned int a4, struct ActorSelectedList *a5)
{
  int v6; // ebx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  void *v12; // eax
  int v13; // ecx
  CREControl *v14; // eax
  char *v15; // eax
  int v16; // ebx
  int v17; // eax
  int v18; // ecx
  void *v19; // eax
  char *v20; // ecx
  int v21; // ebx
  CREControl *v23; // [esp-Ch] [ebp-60h]
  int v24; // [esp-8h] [ebp-5Ch]
  int v25; // [esp-8h] [ebp-5Ch]
  int v26; // [esp+0h] [ebp-54h] BYREF
  _BYTE v27[32]; // [esp+Ch] [ebp-48h] BYREF
  void *v28; // [esp+2Ch] [ebp-28h]
  int v29; // [esp+30h] [ebp-24h]
  int v30; // [esp+34h] [ebp-20h]
  int v31; // [esp+38h] [ebp-1Ch]
  _DWORD *v32; // [esp+3Ch] [ebp-18h]
  void *v33; // [esp+40h] [ebp-14h]
  int *v34; // [esp+44h] [ebp-10h]
  int v35; // [esp+50h] [ebp-4h]
  int v36; // [esp+64h] [ebp+10h]

  v34 = &v26;
  v32 = this;
  ActorSelectedList::ActorSelectedList((ActorSelectedList *)v27, a5);
  v6 = this[1];
  v7 = 0;
  v35 = 0;
  if ( v6 )
    v7 = (this[3] - v6) / 44;
  if ( a4 )
  {
    if ( v6 )
      v8 = (this[2] - v6) / 44;
    else
      v8 = 0;
    if ( 97612893 - v8 < a4 )
      sub_100099B0();
    if ( v6 )
      v9 = (this[2] - v6) / 44;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v21 = this[2];
      if ( (v21 - a3) / 44 >= a4 )
      {
        this[2] = sub_10048BD0(v21 - 44 * a4, v21, (CREControl *)this[2]);
        sub_10048B60(a3, v21 - 44 * a4, v21);
        sub_100489D0(a3, 44 * a4 + a3, (int)v27);
      }
      else
      {
        sub_10048BD0(a3, v21, (CREControl *)(a3 + 44 * a4));
        v24 = a4 - (this[2] - a3) / 44;
        v23 = (CREControl *)this[2];
        LOBYTE(v35) = 3;
        sub_10048B90(v23, v24, (int)v27);
        this[2] += 44 * a4;
        v25 = this[2] - 44 * a4;
        v35 = 0;
        sub_100489D0(a3, v25, (int)v27);
      }
    }
    else
    {
      if ( 97612893 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
        v11 = (this[2] - v6) / 44;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_100096E0(this);
      v12 = sub_10009FE0(v10);
      v13 = this[1];
      LOBYTE(v31) = 0;
      v33 = v12;
      LOBYTE(v35) = 1;
      v14 = sub_10012E80(v13, a3, (CREControl *)v12);
      v15 = sub_10048B90(v14, a4, (int)v27);
      sub_10012E80(a3, this[2], (CREControl *)v15);
      v16 = this[1];
      v17 = 0;
      v35 = 0;
      if ( v16 )
        v17 = (this[2] - v16) / 44;
      v18 = v17 + a4;
      v36 = v17 + a4;
      if ( v16 )
      {
        sub_10011870(v16, this[2]);
        operator delete((void *)this[1]);
        v18 = v36;
      }
      v19 = v33;
      v20 = (char *)v33 + 44 * v18;
      this[3] = (char *)v33 + 44 * v10;
      this[2] = v20;
      this[1] = v19;
    }
  }
  v35 = -1;
  if ( v28 )
    operator delete(v28);
  v28 = 0;
  v29 = 0;
  v30 = 0;
  return std::string::~string(v27);
}
