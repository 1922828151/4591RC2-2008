/*
 * func-name: sub_100E8310
 * func-address: 0x100e8310
 * callers: 0x100e8900
 * callees: 0x1000a280, 0x1000a7e0, 0x1001acb0, 0x1001b570, 0x1001b610, 0x1001f330, 0x10020a70, 0x10023e20, 0x10026fd0, 0x100e7c80, 0x100e7e10, 0x100e7e90, 0x101a2500, 0x101a2522
 */

int __thiscall sub_100E8310(int this, int a2, CREControl *a3, unsigned int a4, void *a5)
{
  int v6; // ecx
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  CREControl *v12; // eax
  int v13; // ecx
  CREControl *v14; // eax
  char *v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // edi
  CREControl *v20; // ecx
  int v21; // edi
  CREControl *v23; // [esp-Ch] [ebp-90h]
  int v24; // [esp-8h] [ebp-8Ch]
  _DWORD *v25; // [esp-8h] [ebp-8Ch]
  int v26; // [esp+0h] [ebp-84h] BYREF
  _DWORD v27[24]; // [esp+Ch] [ebp-78h] BYREF
  int v28; // [esp+6Ch] [ebp-18h]
  int v29; // [esp+70h] [ebp-14h]
  int *v30; // [esp+74h] [ebp-10h]
  int v31; // [esp+80h] [ebp-4h]
  int v32; // [esp+94h] [ebp+10h]
  CREControl *v33; // [esp+98h] [ebp+14h]
  CREControl *v34; // [esp+98h] [ebp+14h]

  v30 = &v26;
  v29 = this;
  sub_1001B610(v27, (int)a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v31 = 0;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 96;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(_DWORD *)(this + 8) - v6) / 96;
    else
      v8 = 0;
    if ( 44739242 - v8 < a4 )
      sub_1001ACB0();
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) / 96;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v20 = *(CREControl **)(this + 8);
      v34 = v20;
      if ( (v20 - a3) / 96 >= a4 )
      {
        v21 = 96 * a4;
        v32 = (int)v20 - 96 * a4;
        *(_DWORD *)(this + 8) = sub_10023E20((int)v20 - v21, (int)v20, v20);
        sub_100E7E10((int)a3, v32, (int)v34);
        sub_100E7C80(a3, (CREControl *)((char *)a3 + v21), (int)v27);
      }
      else
      {
        sub_10023E20((int)a3, (int)v20, (CREControl *)((char *)a3 + 96 * a4));
        v24 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 96;
        v23 = *(CREControl **)(this + 8);
        LOBYTE(v31) = 3;
        sub_100E7E90(v23, v24, (int)v27);
        *(_DWORD *)(this + 8) += 96 * a4;
        v25 = (_DWORD *)(*(_DWORD *)(this + 8) - 96 * a4);
        v31 = 0;
        sub_100E7C80(a3, v25, (int)v27);
      }
    }
    else
    {
      if ( 44739242 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
        v11 = (*(_DWORD *)(this + 8) - v6) / 96;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + std::vector<EditorVar>::size((_DWORD *)this);
      v12 = (CREControl *)sub_1000A7E0(v10);
      v13 = *(_DWORD *)(this + 4);
      LOBYTE(v28) = 0;
      v33 = v12;
      LOBYTE(v31) = 1;
      v14 = sub_1001F330(v13, (int)a3, v12);
      v15 = sub_100E7E90(v14, a4, (int)v27);
      v16 = *(_DWORD *)(this + 8);
      LOBYTE(v28) = 0;
      sub_1001F330((int)a3, v16, (CREControl *)v15);
      v17 = *(_DWORD *)(this + 4);
      v18 = 0;
      v31 = 0;
      if ( v17 )
        v18 = (*(_DWORD *)(this + 8) - v17) / 96;
      v19 = v18 + a4;
      if ( v17 )
      {
        sub_10020A70(v17, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = (char *)v33 + 96 * v10;
      *(_DWORD *)(this + 8) = (char *)v33 + 96 * v19;
      *(_DWORD *)(this + 4) = v33;
    }
  }
  v31 = -1;
  return sub_1001B570((char *)v27);
}
