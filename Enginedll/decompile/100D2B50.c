/*
 * func-name: ??4CDlgMgr@@QAEAAV0@ABV0@@Z
 * func-address: 0x100d2b50
 * callers: none
 * callees: 0x100018c0, 0x100d0080, 0x100d0150, 0x100d01d0, 0x100d02a0
 */

int __thiscall CDlgMgr::operator=(int this, int a2)
{
  _DWORD *v3; // esi
  int v5[2]; // [esp+10h] [ebp-8h] BYREF

  v3 = (_DWORD *)(this + 8);
  *(_BYTE *)(this + 4) = *(_BYTE *)(a2 + 4);
  if ( this + 8 != a2 + 8 )
  {
    sub_100D0080(this + 8, v5, this + 8, **(_DWORD **)(this + 12), this + 8, *(_DWORD *)(this + 12));
    sub_100D0150(v3, a2 + 8);
  }
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20);
  if ( this + 24 != a2 + 24 )
  {
    sub_100D01D0(this + 24, v5, this + 24, **(_DWORD **)(this + 28), this + 24, *(_DWORD *)(this + 28));
    sub_100D02A0((_DWORD *)(this + 24), a2 + 24);
  }
  XMLSystem::operator=(this + 36, a2 + 36);
  *(_BYTE *)(this + 128) = *(_BYTE *)(a2 + 128);
  *(_BYTE *)(this + 129) = *(_BYTE *)(a2 + 129);
  *(_DWORD *)(this + 132) = *(_DWORD *)(a2 + 132);
  *(_DWORD *)(this + 136) = *(_DWORD *)(a2 + 136);
  return this;
}
