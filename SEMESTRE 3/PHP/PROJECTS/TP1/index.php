<?php require './includes/header.php';
      require './includes/navbar.php' ; 
?>


        <?php 
            switch ($page) {
                case 'accueil': ?>
                    <h1>Bienvenue au site</h1>
                   <?php break;
                case 'services': ?>
                    <h1>Bienvenue a la page services</h1>
                   <?php break;
                case 'portfolio': ?>
                    <h1>Bienvenue Pae portfolio</h1>
                   <?php break;
                case 'contacts': ?>
                <?php include_once './pages/contact.php';
                    break;
                default:
                    # code...
                    break;
            }
        ?>

<?php require_once './includes/footer.php' ?>