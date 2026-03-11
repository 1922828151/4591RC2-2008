/*
 * func-name: sub_10287FD0
 * func-address: 0x10287fd0
 * callers: 0x100079ff
 * callees: 0x102c9ea8
 */

int sub_10287FD0()
{
  int v0; // eax
  CDlgMgr *v1; // eax
  struct CTYDialog *Dialog; // eax
  int result; // eax
  _BYTE v4[4]; // [esp+Ch] [ebp-28h] BYREF
  _BYTE v5[24]; // [esp+10h] [ebp-24h] BYREF
  int v6; // [esp+30h] [ebp-4h]
  int retaddr; // [esp+34h] [ebp+0h]

  std::wstring::wstring(v4, &unk_1032327C);
  v6 = 0;
  v0 = CDlgMgr::Instance();
  CDlgMgr::ConfirmMessage(v0);
  retaddr = -1;
  std::wstring::~wstring(v5);
  v1 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v1);
  result = _RTDynamicCast(Dialog, 2, 0, &CTYDialog `RTTI Type Descriptor');
  if ( result )
    *(_BYTE *)(result + 4016) = 0;
  return result;
}
