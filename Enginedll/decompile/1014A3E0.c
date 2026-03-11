/*
 * func-name: ?Instance@CDlgMgr@@SAPAV1@XZ
 * func-address: 0x1014a3e0
 * callers: 0x100a7900, 0x100af0a0, 0x100c5470, 0x100c9e60, 0x100c9fa0, 0x100c9ff0, 0x100d64b0, 0x100d75b0, 0x1015b9f0, 0x1015bad0
 * callees: 0x1014a2e0, 0x101a26a0
 */

struct CDlgMgr *__cdecl CDlgMgr::Instance()
{
  if ( (dword_112429A4 & 1) == 0 )
  {
    dword_112429A4 |= 1u;
    CDlgMgr::CDlgMgr((CDlgMgr *)&unk_11242918);
    atexit(sub_101B9680);
  }
  return (struct CDlgMgr *)&unk_11242918;
}
