/*
 * func-name: ??0CDlgMgr@@QAE@ABV0@@Z
 * func-address: 0x100d2aa0
 * callers: none
 * callees: 0x10001800, 0x100d0c80, 0x100d0d10
 */

CDlgMgr *__thiscall CDlgMgr::CDlgMgr(CDlgMgr *this, const struct CDlgMgr *a2)
{
  *(_DWORD *)this = &CDlgMgr::`vftable';
  *((_BYTE *)this + 4) = *((_BYTE *)a2 + 4);
  sub_100D0C80((_DWORD *)this + 2, (int)a2 + 8);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  sub_100D0D10((_DWORD *)this + 6, (int)a2 + 24);
  XMLSystem::XMLSystem((CDlgMgr *)((char *)this + 36), (const struct CDlgMgr *)((char *)a2 + 36));
  *((_BYTE *)this + 128) = *((_BYTE *)a2 + 128);
  *((_BYTE *)this + 129) = *((_BYTE *)a2 + 129);
  *((_DWORD *)this + 33) = *((_DWORD *)a2 + 33);
  *((_DWORD *)this + 34) = *((_DWORD *)a2 + 34);
  return this;
}
