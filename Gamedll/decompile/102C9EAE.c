/*
 * func-name: memmove_s
 * func-address: 0x102c9eae
 * callers: none
 * callees: none
 */

// attributes: thunk
errno_t __cdecl memmove_s(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  return __imp_memmove_s(Destination, DestinationSize, Source, SourceSize);
}
