/*
 * func-name: sub_1018A680
 * func-address: 0x1018a680
 * callers: 0x100021b7
 * callees: 0x100025ef, 0x10004809, 0x10004fde, 0x1000cf40, 0x1001144b, 0x10012a7b, 0x10012ab7, 0x100145b0, 0x10014c90, 0x10015eba, 0x1001ab86, 0x102c9d50, 0x102c9d62, 0x102c9d86
 */

int __thiscall sub_1018A680(int *this, int a2, void *a3, unsigned int a4, void *a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  void *v12; // eax
  void *v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // ebx
  void *v19; // eax
  char *v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  int v26; // [esp-Ch] [ebp-90h]
  int v27; // [esp-8h] [ebp-8Ch]
  int v28; // [esp-8h] [ebp-8Ch]
  int v29; // [esp+0h] [ebp-84h] BYREF
  int v30; // [esp+4h] [ebp-80h]
  void *v31; // [esp+10h] [ebp-74h]
  int v32; // [esp+14h] [ebp-70h]
  int *v33; // [esp+18h] [ebp-6Ch]
  unsigned int v34; // [esp+1Ch] [ebp-68h]
  _BYTE v35[80]; // [esp+20h] [ebp-64h] BYREF
  int *v36; // [esp+74h] [ebp-10h]
  int v37; // [esp+80h] [ebp-4h]

  v36 = &v29;
  v33 = this;
  sub_1000CF40(a5);
  v6 = this[1];
  v7 = 0;
  v37 = 0;
  if ( v6 )
    v7 = (this[3] - v6) / 80;
  if ( a4 )
  {
    if ( v6 )
      v8 = (this[2] - v6) / 80;
    else
      v8 = 0;
    if ( 53687091 - v8 < a4 )
      sub_10004FDE(v29, v30);
    if ( v6 )
      v9 = (this[2] - v6) / 80;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v21 = this[2];
      v34 = v21;
      if ( (v21 - (int)a3) / 80 >= a4 )
      {
        v33 = (int *)(v21 - 80 * a4);
        v23 = sub_10015EBA(v33, v21, v21);
        v24 = (int)v33;
        this[2] = v23;
        sub_1001AB86((int)a3, v24, v34);
        sub_100025EF((int)a3, (int)a3 + 80 * a4, (int)v35);
      }
      else
      {
        v34 = 80 * a4;
        sub_10015EBA(a3, v21, (int)a3 + 80 * a4);
        v27 = a4 - (this[2] - (int)a3) / 80;
        v26 = this[2];
        LOBYTE(v37) = 3;
        sub_10012AB7(v26, v27, v35);
        v22 = v34;
        this[2] += v34;
        v28 = this[2] - v22;
        v37 = 0;
        sub_100025EF((int)a3, v28, (int)v35);
      }
    }
    else
    {
      if ( 53687091 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
        v11 = (this[2] - v6) / 80;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + sub_1001144B();
      v12 = (void *)sub_100145B0(v10);
      v13 = (void *)this[1];
      LOBYTE(v34) = 0;
      v31 = v12;
      v32 = (int)v12;
      LOBYTE(v37) = 1;
      v32 = sub_10004809(v13, (int)a3, (int)v12);
      v14 = sub_10012AB7(v32, a4, v35);
      v15 = this[2];
      LOBYTE(v34) = 0;
      v32 = v14;
      sub_10004809(a3, v15, v14);
      v16 = this[1];
      v17 = 0;
      v37 = 0;
      if ( v16 )
        v17 = (this[2] - v16) / 80;
      v18 = v17 + a4;
      if ( v16 )
      {
        sub_10012A7B(v16, this[2]);
        operator delete((void *)this[1]);
      }
      v19 = v31;
      v20 = (char *)v31 + 80 * v18;
      this[3] = (int)v31 + 80 * v10;
      this[2] = (int)v20;
      this[1] = (int)v19;
    }
  }
  v37 = -1;
  return sub_10014C90(v29, v30);
}
