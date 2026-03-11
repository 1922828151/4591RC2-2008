/*
 * func-name: ?AddMessage@ChatManager@GameClient@@QAEXW4CHANNEL_TYPE@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z_0
 * func-address: 0x101f3890
 * callers: 0x1001a159
 * callees: 0x10008fdf, 0x1000b42e, 0x1000c559, 0x1000d0a3, 0x100124cc, 0x102c9d62, 0x102c9ea8
 */

int __thiscall GameClient::ChatManager::AddMessage(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // edi
  int v6; // ebx
  CDlgMgr *v7; // eax
  struct CTYDialog *Dialog; // eax
  int v10; // [esp+0h] [ebp-64h]
  int v11; // [esp+0h] [ebp-64h]
  int v12; // [esp+4h] [ebp-60h]
  int v13; // [esp+4h] [ebp-60h]
  int v14; // [esp+18h] [ebp-4Ch] BYREF
  _BYTE v15[28]; // [esp+1Ch] [ebp-48h] BYREF
  _BYTE v16[28]; // [esp+38h] [ebp-2Ch] BYREF
  int v17; // [esp+60h] [ebp-4h]

  sub_10008FDF(v10, v12);
  v17 = 0;
  v14 = a2;
  std::string::operator=(v15, a3);
  std::string::operator=(v16, a4);
  v5 = this[2];
  v6 = sub_1000C559(v5, *(_DWORD *)(v5 + 4), (int)&v14);
  sub_100124CC(1);
  *(_DWORD *)(v5 + 4) = v6;
  **(_DWORD **)(v6 + 4) = v6;
  v7 = (CDlgMgr *)CDlgMgr::Instance();
  Dialog = CDlgMgr::GetDialog(v7);
  if ( _RTDynamicCast(Dialog, 0, &CTYDialog `RTTI Type Descriptor', &CChatMessageUI `RTTI Type Descriptor', 0) )
    CChatMessageUI::AddMessage(a2, a3, a4);
  v17 = -1;
  return sub_1000D0A3(v11, v13);
}
