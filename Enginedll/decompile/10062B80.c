/*
 * func-name: sub_10062B80
 * func-address: 0x10062b80
 * callers: 0x10062fe0
 * callees: 0x1000d900, 0x1001b350, 0x100610d0, 0x10062540, 0x100627b0, 0x10062b10, 0x10062b50, 0x100ff700, 0x10100210, 0x101156a0, 0x101a2500, 0x101a2522
 */

void __thiscall sub_10062B80(int this, int a2, char *a3, unsigned int a4, void *a5)
{
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  int v12; // eax
  CREControl *v13; // eax
  _DWORD *v14; // ecx
  CREControl *v15; // eax
  char *v16; // eax
  _DWORD *v17; // ecx
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // edi
  CREControl *v21; // eax
  _DWORD *v22; // edi
  CREControl *v23; // [esp-Ch] [ebp-40h]
  int v24; // [esp-8h] [ebp-3Ch]
  int v25; // [esp-8h] [ebp-3Ch]
  int v26; // [esp+0h] [ebp-34h] BYREF
  int v27; // [esp+Ch] [ebp-28h] BYREF
  void *v28; // [esp+10h] [ebp-24h]
  CREControl *v29; // [esp+1Ch] [ebp-18h]
  int v30; // [esp+20h] [ebp-14h]
  int *v31; // [esp+24h] [ebp-10h]
  int v32; // [esp+30h] [ebp-4h]
  CREControl *v33; // [esp+48h] [ebp+14h]

  v31 = &v26;
  v30 = this;
  sub_1000D900(&v27, (int)a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v32 = 0;
  if ( v6 )
    v8 = (*(_DWORD *)(this + 12) - v6) >> 4;
  else
    v8 = 0;
  if ( a4 )
  {
    if ( v6 )
      v7 = (*(_DWORD *)(this + 8) - v6) >> 4;
    if ( 0xFFFFFFF - v7 < a4 )
      sub_100610D0();
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) >> 4;
    else
      v9 = 0;
    if ( v8 >= a4 + v9 )
    {
      v21 = *(CREControl **)(this + 8);
      v29 = v21;
      if ( (v21 - (CREControl *)a3) >> 4 >= a4 )
      {
        v22 = (_DWORD *)((char *)v21 - 16 * a4);
        *(_DWORD *)(this + 8) = sub_10062B50(v22, v21, v21);
        sub_101156A0(a3, v22, v29);
        sub_10062540((int)a3, (int)&a3[16 * a4], (int)&v27);
      }
      else
      {
        sub_10062B50(a3, v21, (CREControl *)&a3[16 * a4]);
        v24 = a4 - ((*(_DWORD *)(this + 8) - (int)a3) >> 4);
        v23 = *(CREControl **)(this + 8);
        LOBYTE(v32) = 3;
        sub_10062B10(v23, v24, (int)&v27);
        *(_DWORD *)(this + 8) += 16 * a4;
        v25 = *(_DWORD *)(this + 8) - 16 * a4;
        v32 = 0;
        sub_10062540((int)a3, v25, (int)&v27);
      }
    }
    else
    {
      if ( 0xFFFFFFF - (v8 >> 1) >= v8 )
        v10 = (v8 >> 1) + v8;
      else
        v10 = 0;
      if ( v6 )
        v11 = (*(_DWORD *)(this + 8) - v6) >> 4;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
      {
        if ( v6 )
          v12 = (*(_DWORD *)(this + 8) - v6) >> 4;
        else
          v12 = 0;
        v10 = v12 + a4;
      }
      v13 = (CREControl *)sub_1001B350(v10);
      v14 = *(_DWORD **)(this + 4);
      LOBYTE(v29) = 0;
      v33 = v13;
      LOBYTE(v32) = 1;
      v15 = sub_100627B0(v14, a3, v13);
      v16 = sub_10062B10(v15, a4, (int)&v27);
      v17 = *(_DWORD **)(this + 8);
      LOBYTE(v29) = 0;
      sub_100627B0(a3, v17, (CREControl *)v16);
      v18 = *(_DWORD *)(this + 4);
      if ( v18 )
        v19 = (*(_DWORD *)(this + 8) - v18) >> 4;
      else
        v19 = 0;
      v20 = v19 + a4;
      if ( v18 )
      {
        sub_100FF700(v18, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = (char *)v33 + 16 * v10;
      *(_DWORD *)(this + 8) = (char *)v33 + 16 * v20;
      *(_DWORD *)(this + 4) = v33;
    }
  }
  if ( v28 )
    operator delete(v28);
}
