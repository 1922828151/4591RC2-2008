/*
 * func-name: ?WriteCommonProp@CDlgMgr@@IAE_NPAVDOMElement@xercesc_2_5@@PAVCREControl@@@Z
 * func-address: 0x10149780
 * callers: none
 * callees: 0x1004a1f0, 0x1004a340, 0x101a251c
 */

char __thiscall CDlgMgr::WriteCommonProp(CDlgMgr *this, struct xercesc_2_5::DOMElement *a2, struct CREControl *a3)
{
  XMLSystem *v4; // edi
  char Buffer[64]; // [esp+10h] [ebp-40h] BYREF

  v4 = (CDlgMgr *)((char *)this + 36);
  XMLSystem::Attrib((CDlgMgr *)((char *)this + 36), "ControlID", *((_DWORD *)a3 + 34), a2);
  XMLSystem::Attrib(v4, "Type", *((_DWORD *)a3 + 35), a2);
  sprintf(Buffer, "%d %d", *((_DWORD *)a3 + 43) - *((_DWORD *)a3 + 41), *((_DWORD *)a3 + 44) - *((_DWORD *)a3 + 42));
  XMLSystem::Attrib(v4, "Size", Buffer, a2);
  memset(Buffer, 0, sizeof(Buffer));
  sprintf(Buffer, "%d %d", *((_DWORD *)a3 + 41), *((_DWORD *)a3 + 42));
  XMLSystem::Attrib(v4, "Location", Buffer, a2);
  return 1;
}
