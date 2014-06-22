#ifndef __NV_FACE_ANALYZE_H
#define __NV_FACE_ANALYZE_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
	// Aspect ratio of the eye 
	// where x/y is greater (In the case of one eye slant becomes vertical)
	float eye_ratio;
	// (top of eyes～chin)/(face width - length from chin to the bottom)
	float face_ratio;
	// Average color between the mouth and the eyes
	nv_color_t skin_bgr;
	nv_color_t skin_ec;
	// Larges color class when clustered colors in area between
	// top of eyes and three times length of eyes above the eyes
	nv_color_t hair_bgr;
	nv_color_t hair_ec;
	// Top 4 color of clustered eye color. Skin color is excluded
	nv_color_t left_eye_bgr[4];
	nv_color_t right_eye_bgr[4];
	nv_color_t eye_bgr[4];
	// Top 4 color of clustered eye color. Skin color is excluded (euclidean_color)
	nv_color_t left_eye_ec[4];
	nv_color_t right_eye_ec[4];
	nv_color_t eye_ec[4];
} nv_face_feature_t;

void nv_face_analyze(nv_face_feature_t *feature,
	const nv_face_position_t *face,
	const nv_matrix_t *img);


#ifdef __cplusplus
}
#endif
#endif
