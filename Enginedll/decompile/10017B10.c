/*
 * func-name: ??1VFormat@VertexManager@@QAE@XZ
 * func-address: 0x10017b10
 * callers: 0x100265d0, 0x1002bfc0, 0x1002c1f0, 0x1002c3e0, 0x10172570, 0x10174d80, 0x10175180, 0x10175470
 * callees: none
 */

void __thiscall VertexManager::VFormat::~VFormat(VertexManager::VFormat *this)
{
  std::string::~string((char *)this + 8);
}
