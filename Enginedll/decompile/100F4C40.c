/*
 * func-name: sub_100F4C40
 * func-address: 0x100f4c40
 * callers: 0x100f4ca0
 * callees: 0x100f1f20, 0x100f4a90, 0x10178182
 */

int __thiscall sub_100F4C40(int **this, int a2, int a3)
{
  int **v4; // esi
  int v5; // edi
  int v7; // [esp+0h] [ebp-10h]
  int v8[2]; // [esp+8h] [ebp-8h] BYREF

  v4 = this + 4;
  D3DXFileCreate(this + 4);
  sub_100F1F20(*v4);
  v8[1] = a3;
  v8[0] = a2;
  v5 = sub_100F4A90((int)this, (int)v4, (unsigned int)v8, 3, v7);
  if ( *v4 )
  {
    (*(void (__stdcall **)(int *))(**v4 + 8))(*v4);
    *v4 = 0;
  }
  return v5;
}
