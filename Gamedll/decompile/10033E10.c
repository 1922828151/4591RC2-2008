/*
 * func-name: ?GetObserver@Interactable@GameClient@@QAEPAVInteractableObserver@2@XZ_0
 * func-address: 0x10033e10
 * callers: 0x1000216c
 * callees: none
 */

struct GameClient::InteractableObserver *__thiscall GameClient::Interactable::GetObserver(
        GameClient::Interactable *this)
{
  return (struct GameClient::InteractableObserver *)*((_DWORD *)this + 3);
}
