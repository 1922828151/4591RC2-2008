/*
 * func-name: sub_100F1480
 * func-address: 0x100f1480
 * callers: 0x10001de3
 * callees: none
 */

void __thiscall sub_100F1480(struct Texture **this)
{
  Precacher::PurgeTexture(this + 14);
  std::string::~string(this + 7);
  std::string::~string(this);
}
