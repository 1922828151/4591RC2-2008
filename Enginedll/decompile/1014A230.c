/*
 * func-name: ??1CDlgMgr@@MAE@XZ
 * func-address: 0x1014a230
 * callers: 0x100a2f30, 0x101b9680
 * callees: 0x100017b0, 0x100d0080, 0x100d01d0, 0x101a2500
 */

void __thiscall CDlgMgr::~CDlgMgr(CDlgMgr *this)
{
  int v2; // [esp-Ch] [ebp-30h]
  int v3; // [esp-Ch] [ebp-30h]
  int *v4; // [esp-4h] [ebp-28h]
  int *v5; // [esp-4h] [ebp-28h]
  int v6[2]; // [esp+10h] [ebp-14h] BYREF
  int v7; // [esp+20h] [ebp-4h]

  *(_DWORD *)this = &CDlgMgr::`vftable';
  v7 = 1;
  XMLSystem::~XMLSystem((CDlgMgr *)((char *)this + 36));
  v4 = (int *)*((_DWORD *)this + 7);
  v2 = *v4;
  LOBYTE(v7) = 0;
  sub_100D01D0((int)this + 24, v6, (int)this + 24, v2, (int)this + 24, (int)v4);
  operator delete(*((void **)this + 7));
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  v5 = (int *)*((_DWORD *)this + 3);
  v3 = *v5;
  v7 = -1;
  sub_100D0080((int)this + 8, v6, (int)this + 8, v3, (int)this + 8, (int)v5);
  operator delete(*((void **)this + 3));
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
}
