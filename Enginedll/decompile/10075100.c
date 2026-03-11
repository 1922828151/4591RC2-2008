/*
 * func-name: sub_10075100
 * func-address: 0x10075100
 * callers: 0x101b8ba0
 * callees: 0x1006dc40, 0x1006fab0, 0x101a2500
 */

void __thiscall sub_10075100(int this)
{
  int **v2; // eax
  int v3; // edi
  int *v4; // [esp-Ch] [ebp-30h]
  int v5; // [esp-Ch] [ebp-30h]
  int *v6; // [esp-4h] [ebp-28h]
  int v7[2]; // [esp+10h] [ebp-14h] BYREF
  int v8; // [esp+20h] [ebp-4h]

  v2 = *(int ***)(this + 16);
  v3 = this + 12;
  v4 = *v2;
  v8 = 0;
  sub_1006DC40(this + 12, v7, this + 12, (int **)v4, this + 12, v2);
  operator delete(*(void **)(v3 + 4));
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  v6 = *(int **)(this + 4);
  v5 = *v6;
  v8 = -1;
  sub_1006FAB0(this, v7, this, v5, this, (int)v6);
  operator delete(*(void **)(this + 4));
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
}
