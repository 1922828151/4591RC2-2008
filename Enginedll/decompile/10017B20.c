/*
 * func-name: ??0VFormat@VertexManager@@QAE@ABU01@@Z
 * func-address: 0x10017b20
 * callers: none
 * callees: none
 */

VertexManager::VFormat *__thiscall VertexManager::VFormat::VFormat(
        VertexManager::VFormat *this,
        const struct VertexManager::VFormat *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  std::string::string((char *)this + 8, (char *)a2 + 8);
  *((_DWORD *)this + 9) = *((_DWORD *)a2 + 9);
  return this;
}
