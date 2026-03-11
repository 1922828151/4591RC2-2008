/*
 * func-name: ?RebuildOcTree@World@@QAEXXZ
 * func-address: 0x10137b60
 * callers: none
 * callees: 0x10102270, 0x101a2500, 0x101a2534
 */

void __thiscall World::RebuildOcTree(World *this)
{
  _DWORD *v2; // eax
  int *v3; // esi
  int v4; // ebx
  void *v5; // ebp
  char v6; // [esp+8h] [ebp-4h]

  if ( !*((_DWORD *)this + 189) )
  {
    v2 = operator new(0x10u);
    if ( v2 )
    {
      *v2 = 0;
      v2[1] = 0;
      v2[2] = 0;
      v2[3] = 0;
    }
    else
    {
      v2 = 0;
    }
    *((_DWORD *)this + 189) = v2;
  }
  v3 = (int *)*((_DWORD *)this + 189);
  v4 = *((_DWORD *)this + 188);
  v5 = (void *)*v3;
  v6 = *((_BYTE *)this + 748);
  if ( *v3 )
  {
    sub_10102270((int)v5);
    operator delete(v5);
    *v3 = 0;
  }
  v3[3] = v4;
  v3[1] = (int)this;
  v3[2] = 4;
  if ( v6 )
    v3[2] = 8;
  sub_10103770(v3);
}
