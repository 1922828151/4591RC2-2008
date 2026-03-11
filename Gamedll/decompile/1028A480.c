/*
 * func-name: ?OnBegin@CorpCmdUpdatedObserver@@UAEXAAVEvent@@@Z_0
 * func-address: 0x1028a480
 * callers: 0x100157e9
 * callees: 0x10005aa1, 0x10011315, 0x10017c29, 0x102c9d62, 0x102c9ea8
 */

void __thiscall CorpCmdUpdatedObserver::OnBegin(CorpCmdUpdatedObserver *this, struct Event *a2)
{
  CDlgMgr *v2; // eax
  struct CTYDialog *Dialog; // eax
  float v4[3]; // [esp+8h] [ebp-38h] BYREF
  _BYTE v5[28]; // [esp+14h] [ebp-2Ch] BYREF
  int v6; // [esp+3Ch] [ebp-4h]

  v2 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v2);
  if ( _RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CSelfCorpUI `RTTI Type Descriptor') )
  {
    v4[0] = 0.0;
    v4[1] = 0.0;
    v4[2] = 0.0;
    std::string::string(v5);
    v6 = 0;
    GameClient::GroupManager::Instance();
    GameClient::GroupManager::GetCorpCmd((int)v4, (int)v5);
    sub_10011315((int)v5);
    v6 = -1;
    std::string::~string(v5);
  }
}
