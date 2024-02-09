#include "ColorTransforms.h"

namespace filter2d {

QRgb ColorTransform_Instagram1977::operator()(QRgb c)
{
    static const int kB[] = { 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 64, 65, 66, 68, 69, 70, 71, 72, 73, 75, 76, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 89, 90, 91, 92, 93, 95, 96, 97, 98, 99, 100, 102, 103, 104, 105, 106, 107, 109, 110, 111, 112, 113, 115, 116, 117, 118, 119, 120, 122, 123, 124, 125, 126, 127, 129, 130, 131, 132, 133, 134, 136, 137, 138, 139, 139, 140, 142, 143, 144, 145, 146, 147, 149, 150, 151, 152, 153, 154, 156, 157, 158, 159, 160, 161, 163, 164, 165, 166, 167, 169, 170, 171, 172, 173, 174, 176, 177, 178, 179, 180, 181, 183, 184, 185, 186, 187, 189, 190, 191, 192, 193, 194, 196, 197, 198, 199, 200, 201, 203, 204, 205, 206, 207, 208, 210, 211, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212, 212 };//
    static const int kG[] = { 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 73, 73, 74, 75, 76, 77, 78, 79, 80, 81, 83, 84, 85, 85, 86, 87, 88, 89, 90, 91, 93, 94, 95, 96, 96, 97, 98, 99, 100, 102, 103, 104, 105, 106, 107, 108, 108, 109, 110, 112, 113, 114, 115, 116, 117, 118, 119, 120, 120, 122, 123, 124, 125, 126, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 142, 143, 143, 144, 145, 146, 147, 148, 149, 150, 152, 153, 154, 155, 155, 156, 157, 158, 159, 160, 162, 163, 164, 165, 166, 167, 167, 168, 169, 170, 172, 173, 174, 175, 176, 177, 178, 179, 179, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 202, 202, 203, 204, 205, 206, 207, 208, 209, 210, 212, 213, 214, 214, 215, 216, 217, 218, 219, 221, 222, 223, 224, 225, 226, 226, 227, 228, 229, 231, 232, 233, 234, 235, 236, 237, 237, 238, 239, 241, 242, 243, 244, 245, 246, 247, 248, 249, 249, 251, 252, 253, 254 };//
    static const int kR[] = { 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 81, 82, 84, 84, 85, 86, 88, 88, 89, 91, 92, 93, 93, 95, 96, 97, 98, 99, 100, 101, 103, 103, 104, 106, 107, 107, 108, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 121, 121, 122, 123, 125, 126, 126, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 140, 140, 141, 143, 144, 145, 145, 147, 148, 149, 150, 151, 152, 154, 154, 155, 156, 158, 159, 159, 161, 162, 163, 164, 164, 165, 166, 167, 168, 169, 170, 171, 173, 173, 174, 176, 177, 178, 178, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 191, 192, 192, 193, 195, 196, 196, 198, 199, 200, 201, 202, 203, 204, 206, 206, 207, 208, 210, 210, 211, 213, 214, 215, 215, 217, 218, 219, 220, 221, 222, 223, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225, 225 };//
    return qRgb(kR[qRed(c)],
            kG[qGreen(c)],
            kB[qBlue(c)]
            );
}

QRgb ColorTransform_Cold::operator()(QRgb c)
{
    static const int kR[] = { 0, 0, 0, 1, 1, 3, 4, 4, 5, 5, 6, 6, 7, 8, 9, 10, 10, 10, 11, 13, 13, 14, 14, 15, 16, 16, 17, 18, 19, 20, 21, 21, 22, 22, 23, 24, 26, 25, 27, 27, 29, 29, 30, 31, 33, 32, 34, 34, 36, 36, 37, 38, 39, 39, 40, 41, 43, 42, 43, 45, 47, 47, 48, 49, 51, 51, 52, 53, 55, 56, 57, 57, 58, 58, 58, 59, 61, 62, 63, 63, 65, 65, 66, 67, 69, 70, 71, 71, 73, 73, 74, 75, 77, 78, 79, 79, 81, 81, 82, 83, 85, 86, 87, 87, 89, 89, 90, 91, 93, 94, 95, 95, 97, 97, 98, 99, 101, 103, 104, 103, 106, 106, 107, 108, 110, 111, 112, 112, 114, 114, 115, 116, 118, 119, 119, 120, 122, 122, 123, 124, 126, 127, 128, 128, 129, 129, 130, 132, 134, 137, 138, 138, 140, 140, 139, 140, 142, 145, 145, 145, 147, 147, 149, 151, 153, 154, 154, 154, 156, 156, 157, 158, 160, 163, 164, 162, 164, 164, 167, 167, 170, 172, 172, 172, 174, 174, 176, 176, 178, 180, 180, 180, 182, 182, 183, 185, 187, 190, 191, 191, 191, 191, 192, 195, 197, 199, 200, 200, 202, 201, 202, 203, 207, 206, 207, 209, 209, 211, 213, 213, 216, 217, 217, 217, 220, 220, 220, 221, 224, 226, 227, 227, 230, 230, 231, 232, 234, 235, 235, 237, 238, 238, 240, 241, 243, 243, 246, 246, 248, 248, 249, 250, 253, 254, 255, 255 };
    static const int kG[] = { 2, 2, 4, 7, 10, 12, 13, 13, 15, 15, 18, 18, 21, 22, 23, 24, 26, 26, 27, 29, 31, 32, 34, 33, 36, 36, 37, 39, 40, 41, 42, 42, 46, 46, 47, 48, 50, 51, 53, 53, 55, 55, 56, 57, 59, 60, 62, 62, 64, 64, 65, 66, 67, 69, 70, 69, 73, 72, 73, 75, 77, 79, 80, 79, 81, 81, 82, 83, 85, 86, 87, 87, 90, 90, 90, 91, 93, 94, 95, 95, 97, 97, 98, 99, 101, 102, 103, 103, 105, 105, 106, 107, 109, 110, 111, 111, 113, 113, 114, 115, 117, 118, 119, 119, 121, 121, 122, 123, 125, 126, 127, 127, 128, 128, 130, 131, 133, 133, 134, 135, 136, 136, 137, 138, 140, 141, 142, 142, 144, 144, 145, 146, 148, 149, 149, 148, 150, 150, 151, 152, 154, 155, 156, 156, 159, 159, 160, 160, 162, 163, 164, 164, 166, 166, 167, 168, 170, 171, 171, 171, 173, 173, 175, 175, 177, 178, 180, 180, 180, 180, 181, 182, 184, 184, 185, 186, 188, 188, 188, 188, 191, 192, 193, 193, 195, 195, 196, 196, 198, 198, 200, 200, 202, 202, 203, 203, 205, 206, 207, 207, 209, 209, 210, 211, 213, 213, 214, 214, 216, 217, 216, 217, 219, 220, 221, 221, 223, 223, 225, 225, 226, 227, 229, 229, 230, 230, 230, 231, 233, 235, 236, 236, 236, 236, 237, 238, 240, 241, 241, 241, 244, 242, 244, 245, 247, 247, 248, 248, 250, 250, 251, 252, 253, 254, 255, 255 };
    static const int kB[] = { 1, 1, 3, 7, 9, 11, 12, 12, 16, 16, 18, 18, 21, 22, 24, 25, 26, 26, 27, 29, 31, 32, 33, 33, 35, 35, 38, 40, 41, 42, 43, 43, 46, 46, 47, 48, 50, 50, 52, 52, 54, 54, 55, 56, 60, 61, 63, 63, 65, 65, 66, 67, 68, 69, 70, 70, 73, 72, 73, 75, 77, 78, 79, 79, 81, 81, 82, 83, 85, 86, 87, 87, 89, 89, 89, 90, 92, 93, 94, 94, 96, 96, 97, 98, 100, 101, 102, 102, 104, 104, 105, 106, 108, 109, 110, 110, 112, 112, 113, 114, 116, 117, 118, 118, 120, 120, 121, 122, 124, 125, 126, 126, 130, 130, 129, 130, 132, 133, 134, 134, 136, 136, 137, 138, 140, 141, 142, 142, 144, 144, 145, 146, 148, 149, 149, 149, 151, 151, 152, 153, 155, 156, 157, 157, 159, 159, 160, 161, 163, 164, 165, 165, 167, 167, 168, 169, 171, 172, 172, 172, 172, 172, 174, 175, 177, 178, 179, 179, 180, 180, 181, 182, 184, 185, 186, 186, 188, 188, 189, 189, 192, 193, 194, 194, 196, 196, 195, 195, 197, 198, 199, 199, 201, 201, 202, 203, 205, 206, 207, 207, 209, 209, 210, 211, 213, 214, 215, 215, 217, 217, 216, 217, 219, 220, 221, 221, 223, 223, 225, 225, 227, 228, 229, 229, 231, 231, 231, 232, 232, 234, 235, 235, 236, 236, 237, 238, 240, 241, 241, 242, 244, 243, 245, 246, 248, 248, 247, 247, 249, 249, 250, 251, 253, 254, 255, 255 };
    return qRgb(kR[qRed(c)],
            kG[qGreen(c)],
            kB[qBlue(c)]
            );
}

} //namespace filter2d
