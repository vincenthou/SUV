<title>SUV - Login</title>
<link rel="stylesheet" type="text/css" href="<?php echo Yii::app()->request->baseUrl; ?>/css/lib/reset.css"/>
<link rel="stylesheet" type="text/css" href="<?php echo Yii::app()->request->baseUrl; ?>/css/base.css" />
<div class="background">
	<a href="<?php echo Yii::app()->request->baseUrl; ?>"><h1 class="logo atl"><?php echo CHtml::encode(Yii::app()->name); ?></h1></a>
	<div class="login-wrapper">
		<h2 class="moto fl w50">Enjoy game every day</h2>
		<div class="form fr w50">
			<?php $form=$this->beginWidget('CActiveForm', array(
				'id'=>'login-form',
				'enableClientValidation'=>true,
				'clientOptions'=>array(
					'validateOnSubmit'=>true,
				),
			)); ?>

			<div class="row">
				<?php echo $form->textField($model,'username'); ?>
				<?php echo $form->error($model,'username'); ?>
			</div>

			<div class="row">
				<?php echo $form->passwordField($model,'password'); ?>
				<?php echo $form->error($model,'password'); ?>
			</div>

			<div class="row buttons">
				<?php echo CHtml::submitButton('Login'); ?>
			</div>

			<?php $this->endWidget(); ?>
		</div><!-- form -->
	</div>	
</div>