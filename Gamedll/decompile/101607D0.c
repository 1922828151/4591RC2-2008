/*
 * func-name: ??0Interactable@GameClient@@QAE@K@Z_0
 * func-address: 0x101607d0
 * callers: 0x1000a407
 * callees: none
 */

GameClient::Interactable *__thiscall GameClient::Interactable::Interactable(
        GameClient::Interactable *this,
        unsigned int a2)
{
  GameClient::Interactable *result; // eax

  result = this;
  *((_DWORD *)this + 1) = a2;
  *(_DWORD *)this = &GameClient::Interactable::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  return result;
}
