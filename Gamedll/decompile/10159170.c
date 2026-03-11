/*
 * func-name: ?OnDestroy@DataObject@GameClient@@UAEXXZ_0
 * func-address: 0x10159170
 * callers: 0x1000bbc7
 * callees: none
 */

void __thiscall GameClient::DataObject::OnDestroy(GameClient::DataObject *this)
{
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 1) = -1;
}
